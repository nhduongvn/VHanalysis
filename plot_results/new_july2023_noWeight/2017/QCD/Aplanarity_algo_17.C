void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug 10 12:28:44 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-176396.1,1.133333,1587565);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1343970);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,168426.3);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,41589.56);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,8844.004);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,3562.768);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,917.3885);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,397.4544);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,20.42624);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,35.68988);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,22.07238);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,6.808747);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,275.1211);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,6.808747);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,36142.68);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,5372.322);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,2898.973);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,1223.413);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,1358.559);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,388.0406);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,272.4306);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,11.7931);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,24.08128);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,22.07238);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,6.808747);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,268.3987);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,6.808747);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(116866);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}

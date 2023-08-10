void Aplanarity_algo_18()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Aug  3 12:24:55 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-1490.122,1.133333,13411.1);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,11353.31);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1464.643);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,333.5483);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,90.77108);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,29.03612);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,10.70769);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,4.256342);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1.369109);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.931733);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.9116307);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,1.109217);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.3100993);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.04860075);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.1033664);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,42.45749);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,15.22634);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,7.357239);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,3.819138);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,2.189415);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.381691);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.7608036);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.3571396);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.6394568);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.4246785);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.4564776);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.1268225);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.04860075);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.07322099);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(162879);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}

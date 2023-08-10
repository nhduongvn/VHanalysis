void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug 10 12:24:19 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-189466.8,1.133333,1705201);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1443556);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,182723.3);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,44360.35);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,9317.226);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,4527.398);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,813.4823);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,440.9153);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,14.99854);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,11.55834);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,17.87387);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,5.50891);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,301.3229);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,2.33596);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,37869.52);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,6051.79);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,3344.651);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,1350.694);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,2041.798);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,329.7629);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,342.7821);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,8.798516);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,8.18943);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,17.87387);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,5.50891);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,295.2697);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,2.33596);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(112106);

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

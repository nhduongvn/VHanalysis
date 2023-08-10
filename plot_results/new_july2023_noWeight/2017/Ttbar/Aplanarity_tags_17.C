void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 12:27:54 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-2037.441,1.133333,18336.97);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,15523.36);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,2263.694);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,618.048);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,230.0819);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,105.1493);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,51.48494);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,29.20547);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,17.86393);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,11.01313);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,6.543282);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,3.599933);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,2.373412);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,2.354636);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,0.9263956);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,0.7059001);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.7574802);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.08913271);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.2556355);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.07035638);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.07035638);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,31.1546);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,11.85752);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,6.196762);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,3.770517);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,2.548961);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,1.78258);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.351519);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,1.049104);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.8285133);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.6343915);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.4760025);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.3883367);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.3895935);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.2437847);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2093552);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.2230635);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.06302634);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.1297545);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.07035638);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.07035638);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(317372);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}

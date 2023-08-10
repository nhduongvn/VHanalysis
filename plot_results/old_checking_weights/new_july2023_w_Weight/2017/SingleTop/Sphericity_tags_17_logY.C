void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 10:41:09 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-2.303145,1.133333,3.355172);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,324.9311);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,251.4842);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,157.5225);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,89.41772);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,50.59093);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,31.79716);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,20.75115);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,12.14442);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,5.181261);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,6.09777);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,2.460172);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,2.319125);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,2.05764);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,1.358141);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,1.229834);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,1.203292);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.9089708);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.3292587);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,-0.05094566);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,0.03661988);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,7.893554);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,6.968612);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,5.59198);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,4.185842);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,3.132953);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,2.534298);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,2.022679);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.734882);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.9061166);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,1.120569);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.665985);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.6923104);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.6754395);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.3992342);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.378958);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.4794144);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.5205997);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.2443342);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.05094566);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.03661988);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(11223);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}

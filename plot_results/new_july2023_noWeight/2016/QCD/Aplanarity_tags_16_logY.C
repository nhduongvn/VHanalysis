void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 12:31:33 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-0.2686373,1.133333,6.068245);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,143551.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,24307.81);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,3569.255);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,901.7602);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,154.7571);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,116.3609);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,118.3438);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,50.63004);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,50.47269);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,4.635333);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,28.08319);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,22.20356);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,6520.162);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,3641.943);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,774.4516);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,288.8914);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,39.48014);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,36.88011);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,46.08509);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,25.38476);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,31.94684);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,3.596129);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,22.96885);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,22.20356);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(9717);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}

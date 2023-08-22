void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Tue Aug 22 09:20:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-0.002397915,1.133333,0.02158123);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.01826983);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.01423979);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.008001305);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.00689961);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.002721641);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.001326438);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.0009952311);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.0005132935);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.0002779068);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(10,0.0005297123);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(11,0.0004882801);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(12,0.000695064);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(13,0.0003289748);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.001941459);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.001740815);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.001301258);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.001179007);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.0007380172);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.0005157291);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.0004485958);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.000299842);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0002028372);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(10,0.0003748506);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(11,0.0003453418);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(12,0.0004016845);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(13,0.0002752623);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(277);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_12->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->Draw("HIST");
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

void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 12:23:35 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-176.983,1.133333,1592.847);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,1348.442);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,995.4118);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,575.0677);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,348.3745);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,205.2229);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,110.4522);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,67.29337);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,31.32622);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,24.00634);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,15.69709);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,12.20941);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,10.51594);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,7.265419);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,7.290414);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,4.73572);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,2.820722);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,2.496727);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,0.6182144);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.9128336);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.4945507);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.09592532);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,33.30293);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,26.3784);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,19.0068);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,13.92057);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,11.13862);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,7.313319);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,6.411216);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,2.853915);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,2.837819);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.925123);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,1.993189);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,1.721201);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,1.227304);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,1.507994);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,1.082531);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.7316324);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.8109803);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.278067);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.6287572);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.246037);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.09592532);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(18490);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}

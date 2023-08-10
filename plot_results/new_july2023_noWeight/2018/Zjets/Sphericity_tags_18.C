void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 12:27:53 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-152.4835,1.133333,1372.352);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,1161.779);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,873.7306);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,501.3697);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,307.4928);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,181.5982);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,96.34151);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,59.06373);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,28.52047);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,19.64469);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,13.55521);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,10.06864);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,8.587001);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,6.965502);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,6.158975);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,4.081187);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,2.447612);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,2.348463);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,0.4960702);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.7078452);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.5292756);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.09257296);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,24.56028);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,21.78947);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,14.54571);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,12.171);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,9.7174);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,6.166982);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,5.400542);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,2.429245);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,2.018094);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.545698);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,1.418494);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,1.293183);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,1.13593);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,1.187419);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.8919776);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.6677816);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.7917497);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.2238285);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.5138037);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.2394779);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.09257296);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(18660);

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

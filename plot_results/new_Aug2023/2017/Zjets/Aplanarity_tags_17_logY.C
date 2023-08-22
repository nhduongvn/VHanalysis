void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Tue Aug 22 09:16:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-2.151235,1.133333,4.200536);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,1940.036);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,225.905);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,52.8374);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,16.12443);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,8.975129);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,4.519239);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,3.039841);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.631907);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,0.4811245);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,0.8711927);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.1567934);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.2443414);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.313167);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.0609498);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.1081421);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,26.05388);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,10.86854);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,4.830354);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,1.60829);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.27287);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,0.8954334);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.8013286);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.5695879);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.1867506);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.3723782);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.1109307);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1420632);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.1603485);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.0609498);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.1081421);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(17592);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->Draw("HIST");
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

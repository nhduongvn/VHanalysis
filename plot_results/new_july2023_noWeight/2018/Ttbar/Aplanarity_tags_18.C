void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug 10 12:27:54 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-2727.406,1.133333,24546.65);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,20780.23);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,2927.408);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,808.0932);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,300.2962);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,137.8699);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,66.60361);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,37.96152);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,22.46752);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,13.54006);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,9.254533);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,4.986563);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,4.29888);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,2.222903);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,1.542578);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,1.095792);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.6936718);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.4804194);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.5057493);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.1372627);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.1625926);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,35.83411);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,13.4099);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,7.029349);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,4.282832);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,2.910132);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,2.016975);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.531467);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,1.166484);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.9161968);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.7518156);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.5518666);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.5163971);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.3757933);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.312621);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2625858);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.2037269);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.1815815);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.1807648);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.09705938);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.09552287);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(421807);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}

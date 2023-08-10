void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 12:27:53 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-2.673375,1.133333,24.06038);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,20.36857);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,16.91705);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,9.1294);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,6.539613);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,4.555557);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,2.475498);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.9051683);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.4342979);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.258293);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.1942912);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.1394325);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.1165747);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.06857336);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.06171602);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.04571557);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.03428668);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.01828623);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01142889);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.01828623);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.002285779);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(21,0.002285779);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.2157731);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.1966434);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1444569);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.1222625);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.1020441);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.07522261);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.04548642);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.03150728);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.02429816);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.02107384);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.0178525);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.01632372);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.01251973);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.01187725);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.01022231);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.008852783);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.006465158);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.005111156);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.006465158);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.002285779);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(21,0.002285779);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(27254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->Draw("HIST");
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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void tags_MH_v_MZ_17()
{
//=========Macro generated from canvas: tags_MH_v_MZ_17/tags_MH_v_MZ_17
//=========  (Tue Sep 12 11:47:39 2023) by ROOT version 6.28/04
   TCanvas *tags_MH_v_MZ_17 = new TCanvas("tags_MH_v_MZ_17", "tags_MH_v_MZ_17",0,0,600,600);
   gStyle->SetOptStat(0);
   tags_MH_v_MZ_17->SetHighLightColor(2);
   tags_MH_v_MZ_17->Range(-40,-25,226.6667,225);
   tags_MH_v_MZ_17->SetFillColor(0);
   tags_MH_v_MZ_17->SetBorderMode(0);
   tags_MH_v_MZ_17->SetBorderSize(2);
   tags_MH_v_MZ_17->SetLeftMargin(0.15);
   tags_MH_v_MZ_17->SetFrameBorderMode(0);
   tags_MH_v_MZ_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_tags_MH_v_MZ = new TH2D("VbbHcc_tags_MH_v_MZ","",20,0,200,20,0,200);
   VbbHcc_tags_MH_v_MZ->SetBinContent(131,0.8486911);
   VbbHcc_tags_MH_v_MZ->SetBinContent(186,0.1824887);
   VbbHcc_tags_MH_v_MZ->SetBinContent(215,0.2010138);
   VbbHcc_tags_MH_v_MZ->SetBinContent(219,0.1527238);
   VbbHcc_tags_MH_v_MZ->SetBinContent(241,0.9989704);
   VbbHcc_tags_MH_v_MZ->SetBinContent(263,0.4777418);
   VbbHcc_tags_MH_v_MZ->SetBinContent(359,0.1450824);
   VbbHcc_tags_MH_v_MZ->SetBinContent(373,0.178904);
   VbbHcc_tags_MH_v_MZ->SetBinContent(432,0.1805954);
   VbbHcc_tags_MH_v_MZ->SetBinContent(483,3.634579);
   VbbHcc_tags_MH_v_MZ->SetBinError(131,0.6235527);
   VbbHcc_tags_MH_v_MZ->SetBinError(186,0.1824887);
   VbbHcc_tags_MH_v_MZ->SetBinError(215,0.2010138);
   VbbHcc_tags_MH_v_MZ->SetBinError(219,0.1527238);
   VbbHcc_tags_MH_v_MZ->SetBinError(241,0.5872105);
   VbbHcc_tags_MH_v_MZ->SetBinError(263,0.3426274);
   VbbHcc_tags_MH_v_MZ->SetBinError(359,0.1450824);
   VbbHcc_tags_MH_v_MZ->SetBinError(373,0.178904);
   VbbHcc_tags_MH_v_MZ->SetBinError(432,0.1805954);
   VbbHcc_tags_MH_v_MZ->SetBinError(483,1.304932);
   VbbHcc_tags_MH_v_MZ->SetEntries(24);
   VbbHcc_tags_MH_v_MZ->SetContour(20);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(0,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(1,0.01005069);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(2,0.02010138);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(3,0.03015207);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(4,0.04020276);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(5,0.05025345);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(6,0.06030414);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(7,0.07035483);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(8,0.08040552);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(9,0.09045621);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(10,0.1005069);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(11,0.1105576);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(12,0.1206083);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(13,0.130659);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(14,0.1407097);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(15,0.1507603);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(16,0.160811);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(17,0.1708617);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(18,0.1809124);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(19,0.1909631);
   
   TPaletteAxis *palette = new TPaletteAxis(201.3333,0,213.3333,200,VbbHcc_tags_MH_v_MZ);
   palette->SetNdivisions(510);
   palette->SetAxisColor(1);
   palette->SetLabelColor(1);
   palette->SetLabelFont(42);
   palette->SetLabelOffset(0.005);
   palette->SetLabelSize(0.035);
   palette->SetMaxDigits(0);
   palette->SetTickLength(0.03);
   palette->SetTitleOffset(1);
   palette->SetTitleSize(0.035);
   palette->SetTitleColor(1);
   palette->SetTitleFont(42);
   palette->SetTitle("");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f9f90e");
   palette->SetFillColor(ci);
   palette->SetFillStyle(1001);
   VbbHcc_tags_MH_v_MZ->GetListOfFunctions()->Add(palette,"br");
   VbbHcc_tags_MH_v_MZ->SetLineColor(0);
   VbbHcc_tags_MH_v_MZ->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_tags_MH_v_MZ->GetXaxis()->SetRange(1,20);
   VbbHcc_tags_MH_v_MZ->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_MH_v_MZ->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_MH_v_MZ->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_MH_v_MZ->GetYaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_tags_MH_v_MZ->GetYaxis()->SetRange(1,200);
   VbbHcc_tags_MH_v_MZ->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_MH_v_MZ->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_MH_v_MZ->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_MH_v_MZ->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_MH_v_MZ->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_MH_v_MZ->Draw("colz");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   tags_MH_v_MZ_17->Modified();
   tags_MH_v_MZ_17->cd();
   tags_MH_v_MZ_17->SetSelected(tags_MH_v_MZ_17);
}

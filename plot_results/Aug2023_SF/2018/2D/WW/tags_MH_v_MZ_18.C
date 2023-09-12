#ifdef __CLING__
#pragma cling optimize(0)
#endif
void tags_MH_v_MZ_18()
{
//=========Macro generated from canvas: tags_MH_v_MZ_18/tags_MH_v_MZ_18
//=========  (Tue Sep 12 11:47:40 2023) by ROOT version 6.28/04
   TCanvas *tags_MH_v_MZ_18 = new TCanvas("tags_MH_v_MZ_18", "tags_MH_v_MZ_18",0,0,600,600);
   gStyle->SetOptStat(0);
   tags_MH_v_MZ_18->SetHighLightColor(2);
   tags_MH_v_MZ_18->Range(-40,-25,226.6667,225);
   tags_MH_v_MZ_18->SetFillColor(0);
   tags_MH_v_MZ_18->SetBorderMode(0);
   tags_MH_v_MZ_18->SetBorderSize(2);
   tags_MH_v_MZ_18->SetLeftMargin(0.15);
   tags_MH_v_MZ_18->SetFrameBorderMode(0);
   tags_MH_v_MZ_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_tags_MH_v_MZ = new TH2D("VbbHcc_tags_MH_v_MZ","",20,0,200,20,0,200);
   VbbHcc_tags_MH_v_MZ->SetBinContent(161,0.524235);
   VbbHcc_tags_MH_v_MZ->SetBinContent(329,0.6909771);
   VbbHcc_tags_MH_v_MZ->SetBinContent(470,2.077657);
   VbbHcc_tags_MH_v_MZ->SetBinContent(483,0.3810571);
   VbbHcc_tags_MH_v_MZ->SetBinError(161,0.524235);
   VbbHcc_tags_MH_v_MZ->SetBinError(329,0.6909771);
   VbbHcc_tags_MH_v_MZ->SetBinError(470,2.077657);
   VbbHcc_tags_MH_v_MZ->SetBinError(483,0.3810571);
   VbbHcc_tags_MH_v_MZ->SetEntries(4);
   VbbHcc_tags_MH_v_MZ->SetContour(20);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(0,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(1,0.02621175);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(2,0.0524235);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(3,0.07863525);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(4,0.104847);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(5,0.1310588);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(6,0.1572705);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(7,0.1834823);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(8,0.209694);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(9,0.2359058);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(10,0.2621175);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(11,0.2883293);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(12,0.314541);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(13,0.3407528);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(14,0.3669645);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(15,0.3931763);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(16,0.419388);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(17,0.4455998);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(18,0.4718115);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(19,0.4980233);
   
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   tags_MH_v_MZ_18->Modified();
   tags_MH_v_MZ_18->cd();
   tags_MH_v_MZ_18->SetSelected(tags_MH_v_MZ_18);
}

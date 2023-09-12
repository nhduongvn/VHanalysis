#ifdef __CLING__
#pragma cling optimize(0)
#endif
void tags_MH_v_MZ_16()
{
//=========Macro generated from canvas: tags_MH_v_MZ_16/tags_MH_v_MZ_16
//=========  (Tue Sep 12 11:47:39 2023) by ROOT version 6.28/04
   TCanvas *tags_MH_v_MZ_16 = new TCanvas("tags_MH_v_MZ_16", "tags_MH_v_MZ_16",0,0,600,600);
   gStyle->SetOptStat(0);
   tags_MH_v_MZ_16->SetHighLightColor(2);
   tags_MH_v_MZ_16->Range(-40,-25,226.6667,225);
   tags_MH_v_MZ_16->SetFillColor(0);
   tags_MH_v_MZ_16->SetBorderMode(0);
   tags_MH_v_MZ_16->SetBorderSize(2);
   tags_MH_v_MZ_16->SetLeftMargin(0.15);
   tags_MH_v_MZ_16->SetFrameBorderMode(0);
   tags_MH_v_MZ_16->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_tags_MH_v_MZ = new TH2D("VbbHcc_tags_MH_v_MZ","",20,0,200,20,0,200);
   VbbHcc_tags_MH_v_MZ->SetBinContent(175,0.1080661);
   VbbHcc_tags_MH_v_MZ->SetBinContent(329,0.1336153);
   VbbHcc_tags_MH_v_MZ->SetBinContent(351,0.1336795);
   VbbHcc_tags_MH_v_MZ->SetBinContent(395,0.1407098);
   VbbHcc_tags_MH_v_MZ->SetBinContent(461,0.1005479);
   VbbHcc_tags_MH_v_MZ->SetBinContent(477,0.1002972);
   VbbHcc_tags_MH_v_MZ->SetBinContent(478,0.1158269);
   VbbHcc_tags_MH_v_MZ->SetBinContent(479,0.1081721);
   VbbHcc_tags_MH_v_MZ->SetBinContent(483,0.3152824);
   VbbHcc_tags_MH_v_MZ->SetBinError(175,0.1080661);
   VbbHcc_tags_MH_v_MZ->SetBinError(329,0.1336153);
   VbbHcc_tags_MH_v_MZ->SetBinError(351,0.1336795);
   VbbHcc_tags_MH_v_MZ->SetBinError(395,0.1407098);
   VbbHcc_tags_MH_v_MZ->SetBinError(461,0.1005479);
   VbbHcc_tags_MH_v_MZ->SetBinError(477,0.1002972);
   VbbHcc_tags_MH_v_MZ->SetBinError(478,0.1158269);
   VbbHcc_tags_MH_v_MZ->SetBinError(479,0.1081721);
   VbbHcc_tags_MH_v_MZ->SetBinError(483,0.1824706);
   VbbHcc_tags_MH_v_MZ->SetEntries(11);
   VbbHcc_tags_MH_v_MZ->SetContour(20);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(0,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(1,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(2,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(3,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(4,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(5,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(6,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(7,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(8,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(9,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(10,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(11,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(12,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(13,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(14,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(15,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(16,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(17,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(18,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(19,0);
   
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
   ci = TColor::GetColor("#52ba91");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   tags_MH_v_MZ_16->Modified();
   tags_MH_v_MZ_16->cd();
   tags_MH_v_MZ_16->SetSelected(tags_MH_v_MZ_16);
}

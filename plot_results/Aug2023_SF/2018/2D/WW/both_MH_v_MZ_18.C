#ifdef __CLING__
#pragma cling optimize(0)
#endif
void both_MH_v_MZ_18()
{
//=========Macro generated from canvas: both_MH_v_MZ_18/both_MH_v_MZ_18
//=========  (Tue Sep 12 12:59:02 2023) by ROOT version 6.28/04
   TCanvas *both_MH_v_MZ_18 = new TCanvas("both_MH_v_MZ_18", "both_MH_v_MZ_18",0,0,600,600);
   gStyle->SetOptStat(0);
   both_MH_v_MZ_18->SetHighLightColor(2);
   both_MH_v_MZ_18->Range(-40,-25,226.6667,225);
   both_MH_v_MZ_18->SetFillColor(0);
   both_MH_v_MZ_18->SetBorderMode(0);
   both_MH_v_MZ_18->SetBorderSize(2);
   both_MH_v_MZ_18->SetLeftMargin(0.15);
   both_MH_v_MZ_18->SetFrameBorderMode(0);
   both_MH_v_MZ_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_both_MH_v_MZ = new TH2D("VbbHcc_both_MH_v_MZ","",20,0,200,20,0,200);
   VbbHcc_both_MH_v_MZ->SetBinContent(161,0.524235);
   VbbHcc_both_MH_v_MZ->SetBinContent(187,0.5796581);
   VbbHcc_both_MH_v_MZ->SetBinContent(329,0.6909771);
   VbbHcc_both_MH_v_MZ->SetBinContent(481,0.3810571);
   VbbHcc_both_MH_v_MZ->SetBinContent(483,2.077657);
   VbbHcc_both_MH_v_MZ->SetBinError(161,0.524235);
   VbbHcc_both_MH_v_MZ->SetBinError(187,0.5796581);
   VbbHcc_both_MH_v_MZ->SetBinError(329,0.6909771);
   VbbHcc_both_MH_v_MZ->SetBinError(481,0.3810571);
   VbbHcc_both_MH_v_MZ->SetBinError(483,2.077657);
   VbbHcc_both_MH_v_MZ->SetEntries(5);
   VbbHcc_both_MH_v_MZ->SetContour(20);
   VbbHcc_both_MH_v_MZ->SetContourLevel(0,0);
   VbbHcc_both_MH_v_MZ->SetContourLevel(1,0.02898291);
   VbbHcc_both_MH_v_MZ->SetContourLevel(2,0.05796581);
   VbbHcc_both_MH_v_MZ->SetContourLevel(3,0.08694872);
   VbbHcc_both_MH_v_MZ->SetContourLevel(4,0.1159316);
   VbbHcc_both_MH_v_MZ->SetContourLevel(5,0.1449145);
   VbbHcc_both_MH_v_MZ->SetContourLevel(6,0.1738974);
   VbbHcc_both_MH_v_MZ->SetContourLevel(7,0.2028803);
   VbbHcc_both_MH_v_MZ->SetContourLevel(8,0.2318633);
   VbbHcc_both_MH_v_MZ->SetContourLevel(9,0.2608462);
   VbbHcc_both_MH_v_MZ->SetContourLevel(10,0.2898291);
   VbbHcc_both_MH_v_MZ->SetContourLevel(11,0.318812);
   VbbHcc_both_MH_v_MZ->SetContourLevel(12,0.3477949);
   VbbHcc_both_MH_v_MZ->SetContourLevel(13,0.3767778);
   VbbHcc_both_MH_v_MZ->SetContourLevel(14,0.4057607);
   VbbHcc_both_MH_v_MZ->SetContourLevel(15,0.4347436);
   VbbHcc_both_MH_v_MZ->SetContourLevel(16,0.4637265);
   VbbHcc_both_MH_v_MZ->SetContourLevel(17,0.4927094);
   VbbHcc_both_MH_v_MZ->SetContourLevel(18,0.5216923);
   VbbHcc_both_MH_v_MZ->SetContourLevel(19,0.5506752);
   
   TPaletteAxis *palette = new TPaletteAxis(201.3333,0,213.3333,200,VbbHcc_both_MH_v_MZ);
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
   VbbHcc_both_MH_v_MZ->GetListOfFunctions()->Add(palette,"br");
   VbbHcc_both_MH_v_MZ->SetLineColor(0);
   VbbHcc_both_MH_v_MZ->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_both_MH_v_MZ->GetXaxis()->SetRange(1,20);
   VbbHcc_both_MH_v_MZ->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ->GetYaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_both_MH_v_MZ->GetYaxis()->SetRange(1,200);
   VbbHcc_both_MH_v_MZ->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ->Draw("colz");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   both_MH_v_MZ_18->Modified();
   both_MH_v_MZ_18->cd();
   both_MH_v_MZ_18->SetSelected(both_MH_v_MZ_18);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void WW_both_MH_v_MZ_all()
{
//=========Macro generated from canvas: WW_both_MH_v_MZ_all/WW_both_MH_v_MZ_all
//=========  (Tue Sep 12 12:59:02 2023) by ROOT version 6.28/04
   TCanvas *WW_both_MH_v_MZ_all = new TCanvas("WW_both_MH_v_MZ_all", "WW_both_MH_v_MZ_all",0,0,600,600);
   gStyle->SetOptStat(0);
   WW_both_MH_v_MZ_all->SetHighLightColor(2);
   WW_both_MH_v_MZ_all->Range(-40,-25,226.6667,225);
   WW_both_MH_v_MZ_all->SetFillColor(0);
   WW_both_MH_v_MZ_all->SetBorderMode(0);
   WW_both_MH_v_MZ_all->SetBorderSize(2);
   WW_both_MH_v_MZ_all->SetLeftMargin(0.15);
   WW_both_MH_v_MZ_all->SetFrameBorderMode(0);
   WW_both_MH_v_MZ_all->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_both_MH_v_MZ_all = new TH2D("VbbHcc_both_MH_v_MZ_all","",20,0,200,20,0,200);
   VbbHcc_both_MH_v_MZ_all->SetBinContent(161,0.524235);
   VbbHcc_both_MH_v_MZ_all->SetBinContent(175,0.1080661);
   VbbHcc_both_MH_v_MZ_all->SetBinContent(187,0.5796581);
   VbbHcc_both_MH_v_MZ_all->SetBinContent(241,0.5361026);
   VbbHcc_both_MH_v_MZ_all->SetBinContent(247,0.2239956);
   VbbHcc_both_MH_v_MZ_all->SetBinContent(329,0.8245924);
   VbbHcc_both_MH_v_MZ_all->SetBinContent(407,0.09694687);
   VbbHcc_both_MH_v_MZ_all->SetBinContent(461,0.1005479);
   VbbHcc_both_MH_v_MZ_all->SetBinContent(476,0.1002972);
   VbbHcc_both_MH_v_MZ_all->SetBinContent(479,0.1158269);
   VbbHcc_both_MH_v_MZ_all->SetBinContent(481,0.6984345);
   VbbHcc_both_MH_v_MZ_all->SetBinContent(483,2.978573);
   VbbHcc_both_MH_v_MZ_all->SetBinError(161,0.524235);
   VbbHcc_both_MH_v_MZ_all->SetBinError(175,0.1080661);
   VbbHcc_both_MH_v_MZ_all->SetBinError(187,0.5796581);
   VbbHcc_both_MH_v_MZ_all->SetBinError(241,0.5361026);
   VbbHcc_both_MH_v_MZ_all->SetBinError(247,0.2239956);
   VbbHcc_both_MH_v_MZ_all->SetBinError(329,0.7037773);
   VbbHcc_both_MH_v_MZ_all->SetBinError(407,0.09694687);
   VbbHcc_both_MH_v_MZ_all->SetBinError(461,0.1005479);
   VbbHcc_both_MH_v_MZ_all->SetBinError(476,0.1002972);
   VbbHcc_both_MH_v_MZ_all->SetBinError(479,0.1158269);
   VbbHcc_both_MH_v_MZ_all->SetBinError(481,0.4436436);
   VbbHcc_both_MH_v_MZ_all->SetBinError(483,2.114618);
   VbbHcc_both_MH_v_MZ_all->SetEntries(21);
   VbbHcc_both_MH_v_MZ_all->SetContour(20);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(0,0);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(1,0.02898291);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(2,0.05796581);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(3,0.08694872);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(4,0.1159316);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(5,0.1449145);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(6,0.1738974);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(7,0.2028803);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(8,0.2318633);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(9,0.2608462);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(10,0.2898291);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(11,0.318812);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(12,0.3477949);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(13,0.3767778);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(14,0.4057607);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(15,0.4347436);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(16,0.4637265);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(17,0.4927094);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(18,0.5216923);
   VbbHcc_both_MH_v_MZ_all->SetContourLevel(19,0.5506752);
   
   TPaletteAxis *palette = new TPaletteAxis(201.3333,0,213.3333,200,VbbHcc_both_MH_v_MZ_all);
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
   VbbHcc_both_MH_v_MZ_all->GetListOfFunctions()->Add(palette,"br");
   VbbHcc_both_MH_v_MZ_all->SetLineColor(0);
   VbbHcc_both_MH_v_MZ_all->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_both_MH_v_MZ_all->GetXaxis()->SetRange(1,20);
   VbbHcc_both_MH_v_MZ_all->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_all->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_all->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_all->GetYaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_both_MH_v_MZ_all->GetYaxis()->SetRange(1,200);
   VbbHcc_both_MH_v_MZ_all->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_all->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_all->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_all->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_all->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_all->Draw("colz");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   WW_both_MH_v_MZ_all->Modified();
   WW_both_MH_v_MZ_all->cd();
   WW_both_MH_v_MZ_all->SetSelected(WW_both_MH_v_MZ_all);
}

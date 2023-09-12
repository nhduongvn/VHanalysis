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
   VbbHcc_both_MH_v_MZ->SetBinContent(141,0.5183212);
   VbbHcc_both_MH_v_MZ->SetBinContent(196,0.1162559);
   VbbHcc_both_MH_v_MZ->SetBinContent(197,0.6214135);
   VbbHcc_both_MH_v_MZ->SetBinContent(206,0.4220562);
   VbbHcc_both_MH_v_MZ->SetBinContent(211,0.7371838);
   VbbHcc_both_MH_v_MZ->SetBinContent(212,0.5616047);
   VbbHcc_both_MH_v_MZ->SetBinContent(219,0.6794818);
   VbbHcc_both_MH_v_MZ->SetBinContent(224,0.4031058);
   VbbHcc_both_MH_v_MZ->SetBinContent(229,4.623346);
   VbbHcc_both_MH_v_MZ->SetBinContent(251,0.8776001);
   VbbHcc_both_MH_v_MZ->SetBinContent(263,0.4748496);
   VbbHcc_both_MH_v_MZ->SetBinContent(282,0.5814054);
   VbbHcc_both_MH_v_MZ->SetBinContent(307,0.8259742);
   VbbHcc_both_MH_v_MZ->SetBinContent(340,0.6869376);
   VbbHcc_both_MH_v_MZ->SetBinContent(351,0.6143759);
   VbbHcc_both_MH_v_MZ->SetBinContent(368,2.21233);
   VbbHcc_both_MH_v_MZ->SetBinContent(470,0.5511003);
   VbbHcc_both_MH_v_MZ->SetBinContent(471,0.3908613);
   VbbHcc_both_MH_v_MZ->SetBinContent(483,4.928927);
   VbbHcc_both_MH_v_MZ->SetBinError(141,0.5183212);
   VbbHcc_both_MH_v_MZ->SetBinError(196,0.1162559);
   VbbHcc_both_MH_v_MZ->SetBinError(197,0.6214135);
   VbbHcc_both_MH_v_MZ->SetBinError(206,0.4220562);
   VbbHcc_both_MH_v_MZ->SetBinError(211,0.7371838);
   VbbHcc_both_MH_v_MZ->SetBinError(212,0.5616047);
   VbbHcc_both_MH_v_MZ->SetBinError(219,0.6794818);
   VbbHcc_both_MH_v_MZ->SetBinError(224,0.4031058);
   VbbHcc_both_MH_v_MZ->SetBinError(229,2.391612);
   VbbHcc_both_MH_v_MZ->SetBinError(251,0.8776001);
   VbbHcc_both_MH_v_MZ->SetBinError(263,0.4748496);
   VbbHcc_both_MH_v_MZ->SetBinError(282,0.5814054);
   VbbHcc_both_MH_v_MZ->SetBinError(307,0.8259742);
   VbbHcc_both_MH_v_MZ->SetBinError(340,0.6869376);
   VbbHcc_both_MH_v_MZ->SetBinError(351,0.6143759);
   VbbHcc_both_MH_v_MZ->SetBinError(368,2.21233);
   VbbHcc_both_MH_v_MZ->SetBinError(470,0.5511003);
   VbbHcc_both_MH_v_MZ->SetBinError(471,0.3908613);
   VbbHcc_both_MH_v_MZ->SetBinError(483,2.23412);
   VbbHcc_both_MH_v_MZ->SetEntries(27);
   VbbHcc_both_MH_v_MZ->SetContour(20);
   VbbHcc_both_MH_v_MZ->SetContourLevel(0,0);
   VbbHcc_both_MH_v_MZ->SetContourLevel(1,0.2311673);
   VbbHcc_both_MH_v_MZ->SetContourLevel(2,0.4623346);
   VbbHcc_both_MH_v_MZ->SetContourLevel(3,0.693502);
   VbbHcc_both_MH_v_MZ->SetContourLevel(4,0.9246693);
   VbbHcc_both_MH_v_MZ->SetContourLevel(5,1.155837);
   VbbHcc_both_MH_v_MZ->SetContourLevel(6,1.387004);
   VbbHcc_both_MH_v_MZ->SetContourLevel(7,1.618171);
   VbbHcc_both_MH_v_MZ->SetContourLevel(8,1.849339);
   VbbHcc_both_MH_v_MZ->SetContourLevel(9,2.080506);
   VbbHcc_both_MH_v_MZ->SetContourLevel(10,2.311673);
   VbbHcc_both_MH_v_MZ->SetContourLevel(11,2.542841);
   VbbHcc_both_MH_v_MZ->SetContourLevel(12,2.774008);
   VbbHcc_both_MH_v_MZ->SetContourLevel(13,3.005175);
   VbbHcc_both_MH_v_MZ->SetContourLevel(14,3.236342);
   VbbHcc_both_MH_v_MZ->SetContourLevel(15,3.46751);
   VbbHcc_both_MH_v_MZ->SetContourLevel(16,3.698677);
   VbbHcc_both_MH_v_MZ->SetContourLevel(17,3.929844);
   VbbHcc_both_MH_v_MZ->SetContourLevel(18,4.161012);
   VbbHcc_both_MH_v_MZ->SetContourLevel(19,4.392179);
   
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

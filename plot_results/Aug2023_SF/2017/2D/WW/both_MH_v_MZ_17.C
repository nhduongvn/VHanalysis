#ifdef __CLING__
#pragma cling optimize(0)
#endif
void both_MH_v_MZ_17()
{
//=========Macro generated from canvas: both_MH_v_MZ_17/both_MH_v_MZ_17
//=========  (Tue Sep 12 12:59:01 2023) by ROOT version 6.28/04
   TCanvas *both_MH_v_MZ_17 = new TCanvas("both_MH_v_MZ_17", "both_MH_v_MZ_17",0,0,600,600);
   gStyle->SetOptStat(0);
   both_MH_v_MZ_17->SetHighLightColor(2);
   both_MH_v_MZ_17->Range(-40,-25,226.6667,225);
   both_MH_v_MZ_17->SetFillColor(0);
   both_MH_v_MZ_17->SetBorderMode(0);
   both_MH_v_MZ_17->SetBorderSize(2);
   both_MH_v_MZ_17->SetLeftMargin(0.15);
   both_MH_v_MZ_17->SetFrameBorderMode(0);
   both_MH_v_MZ_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_both_MH_v_MZ = new TH2D("VbbHcc_both_MH_v_MZ","",20,0,200,20,0,200);
   VbbHcc_both_MH_v_MZ->SetBinContent(241,0.5361026);
   VbbHcc_both_MH_v_MZ->SetBinContent(247,0.2239956);
   VbbHcc_both_MH_v_MZ->SetBinContent(481,0.1836979);
   VbbHcc_both_MH_v_MZ->SetBinContent(483,0.4336981);
   VbbHcc_both_MH_v_MZ->SetBinError(241,0.5361026);
   VbbHcc_both_MH_v_MZ->SetBinError(247,0.2239956);
   VbbHcc_both_MH_v_MZ->SetBinError(481,0.1836979);
   VbbHcc_both_MH_v_MZ->SetBinError(483,0.3155173);
   VbbHcc_both_MH_v_MZ->SetEntries(5);
   VbbHcc_both_MH_v_MZ->SetContour(20);
   VbbHcc_both_MH_v_MZ->SetContourLevel(0,0);
   VbbHcc_both_MH_v_MZ->SetContourLevel(1,0.01119978);
   VbbHcc_both_MH_v_MZ->SetContourLevel(2,0.02239956);
   VbbHcc_both_MH_v_MZ->SetContourLevel(3,0.03359933);
   VbbHcc_both_MH_v_MZ->SetContourLevel(4,0.04479911);
   VbbHcc_both_MH_v_MZ->SetContourLevel(5,0.05599889);
   VbbHcc_both_MH_v_MZ->SetContourLevel(6,0.06719867);
   VbbHcc_both_MH_v_MZ->SetContourLevel(7,0.07839844);
   VbbHcc_both_MH_v_MZ->SetContourLevel(8,0.08959822);
   VbbHcc_both_MH_v_MZ->SetContourLevel(9,0.100798);
   VbbHcc_both_MH_v_MZ->SetContourLevel(10,0.1119978);
   VbbHcc_both_MH_v_MZ->SetContourLevel(11,0.1231976);
   VbbHcc_both_MH_v_MZ->SetContourLevel(12,0.1343973);
   VbbHcc_both_MH_v_MZ->SetContourLevel(13,0.1455971);
   VbbHcc_both_MH_v_MZ->SetContourLevel(14,0.1567969);
   VbbHcc_both_MH_v_MZ->SetContourLevel(15,0.1679967);
   VbbHcc_both_MH_v_MZ->SetContourLevel(16,0.1791964);
   VbbHcc_both_MH_v_MZ->SetContourLevel(17,0.1903962);
   VbbHcc_both_MH_v_MZ->SetContourLevel(18,0.201596);
   VbbHcc_both_MH_v_MZ->SetContourLevel(19,0.2127958);
   
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   both_MH_v_MZ_17->Modified();
   both_MH_v_MZ_17->cd();
   both_MH_v_MZ_17->SetSelected(both_MH_v_MZ_17);
}

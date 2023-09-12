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
   VbbHcc_tags_MH_v_MZ->SetBinContent(248,0.2239956);
   VbbHcc_tags_MH_v_MZ->SetBinContent(268,0.2693093);
   VbbHcc_tags_MH_v_MZ->SetBinContent(337,0.1836979);
   VbbHcc_tags_MH_v_MZ->SetBinContent(472,0.5361026);
   VbbHcc_tags_MH_v_MZ->SetBinContent(483,0.1643888);
   VbbHcc_tags_MH_v_MZ->SetBinError(248,0.2239956);
   VbbHcc_tags_MH_v_MZ->SetBinError(268,0.2693093);
   VbbHcc_tags_MH_v_MZ->SetBinError(337,0.1836979);
   VbbHcc_tags_MH_v_MZ->SetBinError(472,0.5361026);
   VbbHcc_tags_MH_v_MZ->SetBinError(483,0.1643888);
   VbbHcc_tags_MH_v_MZ->SetEntries(5);
   VbbHcc_tags_MH_v_MZ->SetContour(20);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(0,0);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(1,0.01346546);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(2,0.02693093);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(3,0.04039639);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(4,0.05386185);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(5,0.06732732);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(6,0.08079278);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(7,0.09425824);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(8,0.1077237);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(9,0.1211892);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(10,0.1346546);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(11,0.1481201);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(12,0.1615856);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(13,0.175051);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(14,0.1885165);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(15,0.2019819);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(16,0.2154474);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(17,0.2289129);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(18,0.2423783);
   VbbHcc_tags_MH_v_MZ->SetContourLevel(19,0.2558438);
   
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

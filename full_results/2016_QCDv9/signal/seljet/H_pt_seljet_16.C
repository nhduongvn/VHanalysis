#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_seljet_16()
{
//=========Macro generated from canvas: H_pt_seljet_16/H_pt_seljet_16
//=========  (Wed Jan 18 11:40:27 2023) by ROOT version 6.26/06
   TCanvas *H_pt_seljet_16 = new TCanvas("H_pt_seljet_16", "H_pt_seljet_16",0,0,600,600);
   H_pt_seljet_16->SetHighLightColor(2);
   H_pt_seljet_16->Range(37.97653,-20.53138,1705.96,150.5635);
   H_pt_seljet_16->SetFillColor(0);
   H_pt_seljet_16->SetFillStyle(4000);
   H_pt_seljet_16->SetBorderMode(0);
   H_pt_seljet_16->SetBorderSize(2);
   H_pt_seljet_16->SetLeftMargin(0.15709);
   H_pt_seljet_16->SetRightMargin(0.1234783);
   H_pt_seljet_16->SetBottomMargin(0.12);
   H_pt_seljet_16->SetFrameFillStyle(1000);
   H_pt_seljet_16->SetFrameBorderMode(0);
   H_pt_seljet_16->SetFrameFillStyle(1000);
   H_pt_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(133.454);
   
   TH1F *st_stack_269 = new TH1F("st_stack_269","",40,0,2000);
   st_stack_269->SetMinimum(0);
   st_stack_269->SetMaximum(133.454);
   st_stack_269->SetDirectory(0);
   st_stack_269->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_269->SetLineColor(ci);
   st_stack_269->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_269->GetXaxis()->SetRange(7,30);
   st_stack_269->GetXaxis()->SetLabelFont(42);
   st_stack_269->GetXaxis()->SetTitleOffset(1);
   st_stack_269->GetXaxis()->SetTitleFont(42);
   st_stack_269->GetYaxis()->SetTitle("Events/50.0");
   st_stack_269->GetYaxis()->SetLabelFont(42);
   st_stack_269->GetYaxis()->SetTitleSize(0.037);
   st_stack_269->GetYaxis()->SetTitleFont(42);
   st_stack_269->GetZaxis()->SetLabelFont(42);
   st_stack_269->GetZaxis()->SetTitleOffset(1);
   st_stack_269->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_269);
   
   
   TH1D *VbbHcc_seljet_H_pt_stack_1 = new TH1D("VbbHcc_seljet_H_pt_stack_1","",40,0,2000);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(1,74.88181);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(2,88.96932);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(3,35.74894);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(4,10.94571);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(5,4.023698);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(6,1.727435);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(7,0.7506531);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(8,0.376884);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(9,0.2037327);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(10,0.0821828);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(11,0.03521458);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(12,0.02181401);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(13,0.01500957);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(14,0.00545045);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(15,0.003216199);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(16,0.008918777);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(17,0.001731172);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(18,0.003279265);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(19,0.001514127);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(20,0.003130023);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(25,0.001119176);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(1,0.3437959);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(2,0.3737101);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(3,0.2345384);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(4,0.1288617);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(5,0.07773549);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(6,0.05092476);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(7,0.03340095);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(8,0.02355083);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(9,0.01734352);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(10,0.01087381);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(11,0.007317749);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(12,0.005674071);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(13,0.004777233);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(14,0.002785277);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(15,0.002278073);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(16,0.003651125);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(17,0.001731172);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(18,0.002320469);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(19,0.001514127);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(20,0.00221374);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(25,0.001119176);
   VbbHcc_seljet_H_pt_stack_1->SetEntries(157244);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_pt_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_pt_stack_2 = new TH1D("VbbHcc_seljet_H_pt_stack_2","",40,0,2000);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(1,13.75957);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(2,20.37418);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(3,12.16182);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(4,5.972741);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(5,2.882588);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(6,1.377487);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(7,0.6978618);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(8,0.3598199);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(9,0.2053442);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(10,0.1012359);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(11,0.05518503);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(12,0.03587333);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(13,0.01767908);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(14,0.01056156);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(15,0.00702228);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(16,0.004393834);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(17,0.002588542);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(18,0.001894832);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(19,0.002236928);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(20,0.0008669473);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(21,0.0005631651);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(22,0.0002127011);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(23,0.000534751);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(24,0.0001480239);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(25,5.57783e-05);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(26,0.0004053196);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(30,0.0001867829);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(32,1.371525e-05);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(1,0.05125213);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(2,0.06232978);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(3,0.04803234);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(4,0.03354476);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(5,0.02322233);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(6,0.01600353);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(7,0.01138881);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(8,0.008161828);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(9,0.006164688);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(10,0.004326808);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(11,0.003211133);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(12,0.002580231);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(13,0.001825478);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(14,0.00139636);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(15,0.001128104);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(16,0.0009062653);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(17,0.0006741148);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(18,0.0006005845);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(19,0.0006549145);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(20,0.0003995475);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(21,0.0003252119);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(22,0.0002127011);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(23,0.0003151165);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(24,0.0001480239);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(25,5.57783e-05);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(26,0.0002872163);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(30,0.0001867829);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(32,1.371525e-05);
   VbbHcc_seljet_H_pt_stack_2->SetEntries(328438);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_pt_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_seljet_H_pt_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_seljet_16->Modified();
   H_pt_seljet_16->cd();
   H_pt_seljet_16->SetSelected(H_pt_seljet_16);
}

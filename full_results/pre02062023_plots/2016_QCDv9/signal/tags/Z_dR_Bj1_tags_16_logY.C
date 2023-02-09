#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_16/Z_dR_Bj1_tags_16
//=========  (Wed Jan 18 11:42:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_16 = new TCanvas("Z_dR_Bj1_tags_16", "Z_dR_Bj1_tags_16",0,0,600,600);
   Z_dR_Bj1_tags_16->SetHighLightColor(2);
   Z_dR_Bj1_tags_16->Range(-1.310117,0.5772858,7.029799,2.440558);
   Z_dR_Bj1_tags_16->SetFillColor(0);
   Z_dR_Bj1_tags_16->SetFillStyle(4000);
   Z_dR_Bj1_tags_16->SetBorderMode(0);
   Z_dR_Bj1_tags_16->SetBorderSize(2);
   Z_dR_Bj1_tags_16->SetLogy();
   Z_dR_Bj1_tags_16->SetLeftMargin(0.15709);
   Z_dR_Bj1_tags_16->SetRightMargin(0.1234783);
   Z_dR_Bj1_tags_16->SetBottomMargin(0.12);
   Z_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(145.6738);
   
   TH1F *st_stack_53 = new TH1F("st_stack_53","",30,0,6);
   st_stack_53->SetMinimum(6.322349);
   st_stack_53->SetMaximum(179.5686);
   st_stack_53->SetDirectory(0);
   st_stack_53->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_53->SetLineColor(ci);
   st_stack_53->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_53->GetXaxis()->SetRange(1,30);
   st_stack_53->GetXaxis()->SetLabelFont(42);
   st_stack_53->GetXaxis()->SetTitleOffset(1);
   st_stack_53->GetXaxis()->SetTitleFont(42);
   st_stack_53->GetYaxis()->SetTitle("Events/0.2");
   st_stack_53->GetYaxis()->SetLabelFont(42);
   st_stack_53->GetYaxis()->SetTitleSize(0.037);
   st_stack_53->GetYaxis()->SetTitleFont(42);
   st_stack_53->GetZaxis()->SetLabelFont(42);
   st_stack_53->GetZaxis()->SetTitleOffset(1);
   st_stack_53->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_53);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,0.2088937);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,0.8658283);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,0.9926052);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,1.028621);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,0.8370154);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,0.5762585);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,0.4048216);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,0.3241454);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,0.2420285);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,0.2247408);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,0.167115);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,0.1469459);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,0.1267769);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,0.1123704);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,0.09940458);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,0.09652329);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,0.04321938);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,0.04033809);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,0.01584711);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,0.01584711);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,0.01152517);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,0.002881292);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,0.002881292);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,0.004321938);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,0.002881292);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(27,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(29,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(30,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(31,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,0.01734768);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,0.03531787);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,0.03781525);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,0.03849519);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,0.03472525);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,0.02881292);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,0.02414963);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,0.02160969);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,0.01867291);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,0.01799366);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,0.01551623);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,0.01454981);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,0.01351446);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,0.01272344);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,0.01196691);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,0.0117922);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,0.007890744);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,0.007623183);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,0.004778083);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,0.004778083);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,0.004074763);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,0.002037381);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,0.002037381);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,0.002495272);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,0.002037381);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(27,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(29,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(30,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(31,0.001440646);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(4581);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,0.1422284);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,0.4076014);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,0.4641327);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,0.3750149);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,0.2482696);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,0.1782356);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,0.1116223);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,0.08407679);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,0.06931384);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,0.04968992);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,0.05041007);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,0.0435687);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,0.04014802);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,0.03222644);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,0.02988597);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,0.02772554);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,0.01836367);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,0.01026205);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,0.006121222);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,0.002520503);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,0.004500899);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,0.001620324);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,0.0009001798);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,0.001080216);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,0.0005401079);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,0.0007201438);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,0.0003600719);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,0.000180036);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,0.0003600719);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,0.005060259);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,0.008566382);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,0.009141147);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,0.008216822);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,0.006685615);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,0.005664699);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,0.004482859);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,0.00389061);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,0.00353256);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,0.002990982);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,0.003012578);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,0.002800702);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,0.00268851);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,0.002408717);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,0.002319601);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,0.002234187);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,0.001818274);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,0.001359242);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,0.001049781);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.0006736328);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.0009001798);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.0005401079);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,0.0004025726);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.0004409962);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.0003118314);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.0003600719);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,0.0002546093);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,0.000180036);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,0.0002546093);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(13340);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_tags_16->Modified();
   Z_dR_Bj1_tags_16->cd();
   Z_dR_Bj1_tags_16->SetSelected(Z_dR_Bj1_tags_16);
}

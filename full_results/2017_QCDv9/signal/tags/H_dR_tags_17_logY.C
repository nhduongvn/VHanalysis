#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_17_logY()
{
//=========Macro generated from canvas: H_dR_tags_17/H_dR_tags_17
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *H_dR_tags_17 = new TCanvas("H_dR_tags_17", "H_dR_tags_17",0,0,600,600);
   H_dR_tags_17->SetHighLightColor(2);
   H_dR_tags_17->Range(-1.353788,0.6248865,7.264125,2.261986);
   H_dR_tags_17->SetFillColor(0);
   H_dR_tags_17->SetFillStyle(4000);
   H_dR_tags_17->SetBorderMode(0);
   H_dR_tags_17->SetBorderSize(2);
   H_dR_tags_17->SetLogy();
   H_dR_tags_17->SetLeftMargin(0.15709);
   H_dR_tags_17->SetRightMargin(0.1234783);
   H_dR_tags_17->SetBottomMargin(0.12);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(104.1856);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",30,0,6);
   st_stack_22->SetMinimum(6.627328);
   st_stack_22->SetMaximum(125.3938);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_22->GetXaxis()->SetRange(1,31);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,0.1706647);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,0.3286764);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,0.4057572);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,0.5436436);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,0.6226722);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,0.6678614);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,0.7551605);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,0.71897);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,0.693044);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,0.6543069);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,0.7270817);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,0.7785511);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,0.860352);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,0.8463106);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,0.2837729);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,0.1685346);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,0.07942669);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,0.05842899);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,0.04097972);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,0.03362289);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,0.01394623);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,0.009222891);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,0.003138135);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,0.002923655);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,0.01750963);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,0.02477462);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,0.02699538);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,0.03166329);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,0.03353816);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,0.03513333);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,0.03738062);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,0.03598905);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,0.03579951);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,0.03504986);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,0.03667557);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,0.0372339);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,0.03981751);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,0.03951567);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,0.02298211);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,0.01725521);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,0.01183876);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,0.009836767);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,0.008310032);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,0.007702677);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,0.005123368);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,0.003867265);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,0.002296413);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,0.001905132);
   VbbHcc_tags_H_dR_stack_1->SetEntries(6340);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,0.04717239);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,0.0976227);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,0.149578);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,0.2223812);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,0.245719);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,0.2456487);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,0.2396943);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,0.1843835);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,0.1733553);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,0.1616957);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,0.1535725);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,0.1749829);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,0.181504);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,0.1813944);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,0.09429684);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,0.04967153);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,0.03020597);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,0.0191956);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,0.01467615);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,0.009875708);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,0.005409951);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,0.002620506);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,0.003177114);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,0.0004644751);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,0.003368245);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,0.004851729);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,0.006080805);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,0.007389915);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,0.007765485);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,0.007760559);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,0.007703728);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,0.006725596);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,0.006542785);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,0.006301758);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,0.006069654);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,0.0065351);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,0.006635445);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,0.006678615);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,0.0047834);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,0.003480787);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,0.00270365);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,0.002163956);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,0.001891456);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,0.001541263);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,0.001153446);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,0.0007663108);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,0.0008921167);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,0.0003327574);
   VbbHcc_tags_H_dR_stack_2->SetEntries(12653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_17->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->SetSelected(H_dR_tags_17);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Tue Feb 14 15:57:08 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.310117,-0.7403802,7.029799,5.429455);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetFillStyle(4000);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15709);
   Z_dR_tags_18->SetRightMargin(0.1234783);
   Z_dR_tags_18->SetBottomMargin(0.12);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.812471);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",30,0,6);
   st_stack_19->SetMinimum(0);
   st_stack_19->SetMaximum(4.812471);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_19->GetXaxis()->SetRange(1,30);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/0.2");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetTitleSize(0.037);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,1.047057);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,1.606776);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,1.975569);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,2.208254);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,1.967177);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,1.819062);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,1.774151);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,1.491848);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,1.484715);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,1.35226);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,1.261007);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,1.312108);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,1.49218);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,1.276836);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,0.4347638);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,0.2201007);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,0.1167455);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,0.0679357);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,0.04417223);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,0.03196571);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,0.01504839);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,0.0116052);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,0.002532203);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,0.002358174);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,0.05723038);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,0.06759867);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,0.07811885);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,0.08937908);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,0.07352808);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,0.07251738);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,0.07538815);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,0.06828719);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,0.06356698);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,0.06105613);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,0.05995384);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,0.06054051);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,0.06474776);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,0.06101031);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,0.03416189);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,0.02427798);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,0.02009755);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,0.01327095);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,0.01205402);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,0.008941771);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,0.006192106);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,0.005893307);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,0.002532203);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,0.002358174);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(9189);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,0.366002);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,0.786111);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,0.9737138);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,1.00006);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,0.8018428);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,0.554152);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,0.3844875);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,0.3077988);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,0.2601096);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,0.2541701);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,0.2974771);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,0.2979531);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,0.3342703);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,0.3290431);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,0.1467713);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,0.07042549);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,0.04430526);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,0.02770944);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,0.01447403);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,0.006589836);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,0.007073046);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,0.002190522);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,0.003073239);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,0.01220712);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,0.01699522);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,0.01923449);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,0.02001655);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,0.02171081);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,0.0195876);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,0.01168745);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,0.01046899);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,0.009718414);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,0.010039);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,0.01092138);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,0.01047552);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,0.01103963);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,0.01166615);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,0.008076142);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,0.004905762);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,0.00393525);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,0.003090241);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,0.002252318);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,0.001513469);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,0.001591275);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,0.0008298273);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,0.001098495);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(21359);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}

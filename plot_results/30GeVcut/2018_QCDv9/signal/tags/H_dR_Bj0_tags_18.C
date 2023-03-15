#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_18/H_dR_Bj0_tags_18
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_tags_18 = new TCanvas("H_dR_Bj0_tags_18", "H_dR_Bj0_tags_18",0,0,600,600);
   H_dR_Bj0_tags_18->SetHighLightColor(2);
   H_dR_Bj0_tags_18->Range(-1.310117,-0.9610896,7.029799,7.047991);
   H_dR_Bj0_tags_18->SetFillColor(0);
   H_dR_Bj0_tags_18->SetFillStyle(4000);
   H_dR_Bj0_tags_18->SetBorderMode(0);
   H_dR_Bj0_tags_18->SetBorderSize(2);
   H_dR_Bj0_tags_18->SetLeftMargin(0.15709);
   H_dR_Bj0_tags_18->SetRightMargin(0.1234783);
   H_dR_Bj0_tags_18->SetBottomMargin(0.12);
   H_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
   H_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.247083);
   
   TH1F *st_stack_43 = new TH1F("st_stack_43","",30,0,6);
   st_stack_43->SetMinimum(0);
   st_stack_43->SetMaximum(6.247083);
   st_stack_43->SetDirectory(0);
   st_stack_43->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_43->SetLineColor(ci);
   st_stack_43->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_43->GetXaxis()->SetRange(1,30);
   st_stack_43->GetXaxis()->SetLabelFont(42);
   st_stack_43->GetXaxis()->SetTitleOffset(1);
   st_stack_43->GetXaxis()->SetTitleFont(42);
   st_stack_43->GetYaxis()->SetTitle("Events/0.2");
   st_stack_43->GetYaxis()->SetLabelFont(42);
   st_stack_43->GetYaxis()->SetTitleSize(0.037);
   st_stack_43->GetYaxis()->SetTitleFont(42);
   st_stack_43->GetZaxis()->SetLabelFont(42);
   st_stack_43->GetZaxis()->SetTitleOffset(1);
   st_stack_43->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_43);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,0.6440406);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,2.526096);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,3.136);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,2.683123);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,2.227971);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,1.918467);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,1.511106);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,1.153811);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,0.9740261);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,0.8534107);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,0.6258345);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,0.5188737);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,0.4824615);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,0.4460493);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,0.3459158);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,0.2981248);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,0.2207489);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,0.1365457);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,0.05689405);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,0.05461829);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,0.03868795);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,0.01365457);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,0.0182061);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,0.01365457);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,0.006827286);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,0.03828424);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,0.07582079);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,0.08447952);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,0.07814186);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,0.07120626);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,0.06607552);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,0.05864228);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,0.05124256);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,0.04708133);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,0.04406994);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,0.03773924);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,0.03436325);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,0.03313559);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,0.03186067);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,0.02805748);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,0.02604729);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,0.02241366);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,0.01762798);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,0.01137881);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,0.01114891);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,0.009383207);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,0.005574455);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,0.006436827);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,0.005574455);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,0.003941735);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,0.003218413);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(9189);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,0.2535097);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,0.9214447);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,1.028722);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,0.8630116);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,0.7212739);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,0.5211032);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,0.4279099);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,0.2894685);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,0.2364292);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,0.1905817);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,0.1612154);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,0.1468318);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,0.1249569);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,0.1180648);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,0.1057788);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,0.1000854);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,0.07311626);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,0.03655813);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,0.02726877);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,0.02007701);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,0.01168662);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,0.007191763);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,0.003895538);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,0.002996568);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,0.002397254);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,0.002397254);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,0.0008989704);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,0.0008989704);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,0.008715841);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,0.01661677);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,0.01755743);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,0.01608127);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,0.01470152);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,0.01249608);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,0.0113237);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,0.009313495);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,0.008417103);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,0.007557057);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,0.006950488);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,0.006633186);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,0.006119165);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,0.005948018);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,0.00563004);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,0.005476428);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,0.004680789);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,0.003309818);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,0.002858544);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,0.002452797);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,0.001871356);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.001468013);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.001080428);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.000947598);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.0008475574);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.0008475574);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.0005190208);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,0.0005190208);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(21359);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_tags_18->Modified();
   H_dR_Bj0_tags_18->cd();
   H_dR_Bj0_tags_18->SetSelected(H_dR_Bj0_tags_18);
}

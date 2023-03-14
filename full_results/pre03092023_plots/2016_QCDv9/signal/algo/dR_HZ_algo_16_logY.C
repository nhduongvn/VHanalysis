#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_algo_16_logY()
{
//=========Macro generated from canvas: dR_HZ_algo_16/dR_HZ_algo_16
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *dR_HZ_algo_16 = new TCanvas("dR_HZ_algo_16", "dR_HZ_algo_16",0,0,600,600);
   dR_HZ_algo_16->SetHighLightColor(2);
   dR_HZ_algo_16->Range(-1.310117,-0.04468045,7.029799,0.3276567);
   dR_HZ_algo_16->SetFillColor(0);
   dR_HZ_algo_16->SetFillStyle(4000);
   dR_HZ_algo_16->SetBorderMode(0);
   dR_HZ_algo_16->SetBorderSize(2);
   dR_HZ_algo_16->SetLogy();
   dR_HZ_algo_16->SetLeftMargin(0.15709);
   dR_HZ_algo_16->SetRightMargin(0.1234783);
   dR_HZ_algo_16->SetBottomMargin(0.12);
   dR_HZ_algo_16->SetFrameFillStyle(1000);
   dR_HZ_algo_16->SetFrameBorderMode(0);
   dR_HZ_algo_16->SetFrameFillStyle(1000);
   dR_HZ_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_101 = new TH1F("st_stack_101","",60,0,6);
   st_stack_101->SetMinimum(-2.336951e+09);
   st_stack_101->SetMaximum(-0.3074698);
   st_stack_101->SetDirectory(0);
   st_stack_101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_101->SetLineColor(ci);
   st_stack_101->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   st_stack_101->GetXaxis()->SetRange(1,61);
   st_stack_101->GetXaxis()->SetLabelFont(42);
   st_stack_101->GetXaxis()->SetTitleOffset(1);
   st_stack_101->GetXaxis()->SetTitleFont(42);
   st_stack_101->GetYaxis()->SetTitle("Event/0.1");
   st_stack_101->GetYaxis()->SetLabelFont(42);
   st_stack_101->GetYaxis()->SetTitleSize(0.037);
   st_stack_101->GetYaxis()->SetTitleFont(42);
   st_stack_101->GetZaxis()->SetLabelFont(42);
   st_stack_101->GetZaxis()->SetTitleOffset(1);
   st_stack_101->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_101);
   
   
   TH1D *VbbHcc_algo_dR_HZ_stack_1 = new TH1D("VbbHcc_algo_dR_HZ_stack_1","",60,0,6);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(16,0.000944626);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(17,0.002383746);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(21,0.00208193);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(24,0.004482158);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(25,0.006137916);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(26,0.004283911);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(27,0.005943102);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(28,0.01754582);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(29,0.03277509);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(30,0.08691093);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(31,0.1543137);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(32,0.2238974);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(33,0.060968);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(34,0.04279967);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(35,0.02264572);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(36,0.01634553);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(37,0.004448938);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(38,0.01092034);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(39,0.00213017);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(40,0.004777125);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(44,0.001894795);
   VbbHcc_algo_dR_HZ_stack_1->SetBinContent(50,0.002105239);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(16,0.000944626);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(17,0.002383746);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(21,0.00208193);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(24,0.003177408);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(25,0.003583017);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(26,0.003031997);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(27,0.003482468);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(28,0.006215565);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(29,0.008284013);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(30,0.01378375);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(31,0.01864458);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(32,0.0225144);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(33,0.01139957);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(34,0.009677027);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(35,0.007175207);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(36,0.006186969);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(37,0.003148764);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(38,0.004896356);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(39,0.00213017);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(40,0.003377957);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(44,0.001894795);
   VbbHcc_algo_dR_HZ_stack_1->SetBinError(50,0.002105239);
   VbbHcc_algo_dR_HZ_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_dR_HZ_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_dR_HZ_stack_1->SetLineColor(ci);
   VbbHcc_algo_dR_HZ_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_dR_HZ_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_dR_HZ_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_dR_HZ_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_dR_HZ_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_dR_HZ_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_dR_HZ_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_dR_HZ_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_dR_HZ_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_dR_HZ_stack_1,"");
   
   TH1D *VbbHcc_algo_dR_HZ_stack_2 = new TH1D("VbbHcc_algo_dR_HZ_stack_2","",60,0,6);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(12,0.0002954569);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(17,0.0003159094);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(19,0.0005090142);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(20,0.0006292956);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(21,0.0004683927);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(22,0.0008671717);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(23,0.001612741);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(24,0.001006401);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(25,0.001652239);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(26,0.002274319);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(27,0.008665896);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(28,0.008905629);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(29,0.01571485);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(30,0.02580483);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(31,0.046402);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(32,0.05269586);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(33,0.02690711);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(34,0.01697855);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(35,0.01116173);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(36,0.006705745);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(37,0.004522449);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(38,0.002639235);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(39,0.001764825);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(40,0.002167186);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(41,0.0005397643);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(42,0.001197769);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(43,0.0002764101);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(44,0.00116118);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(45,0.0005654474);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(46,0.0005854738);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(47,0.000269608);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(48,0.0004204157);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(50,0.0005202695);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(51,0.0003172409);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(52,0.0002738481);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(58,0.0002701085);
   VbbHcc_algo_dR_HZ_stack_2->SetBinContent(61,0.0002783554);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(12,0.0002954569);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(17,0.0003159094);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(19,0.0003605401);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(20,0.0004449958);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(21,0.0003333604);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(22,0.0005013094);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(23,0.0006645755);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(24,0.0005182128);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(25,0.0006759569);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(26,0.000754059);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(27,0.00158428);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(28,0.001604168);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(29,0.002100514);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(30,0.00271927);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(31,0.003641258);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(32,0.003885241);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(33,0.002772774);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(34,0.002205723);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(35,0.001773894);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(36,0.001383742);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(37,0.001136923);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(38,0.0008551315);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(39,0.0007212154);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(40,0.0007831718);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(41,0.000381859);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(42,0.0005721618);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(43,0.0002764101);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(44,0.0005808257);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(45,0.0004001401);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(46,0.0004144728);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(47,0.000269608);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(48,0.0002978771);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(50,0.0003687004);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(51,0.0003172409);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(52,0.0002738481);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(58,0.0002701085);
   VbbHcc_algo_dR_HZ_stack_2->SetBinError(61,0.0002783554);
   VbbHcc_algo_dR_HZ_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_dR_HZ_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_dR_HZ_stack_2->SetLineColor(ci);
   VbbHcc_algo_dR_HZ_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_dR_HZ_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_dR_HZ_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_dR_HZ_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_dR_HZ_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_dR_HZ_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_dR_HZ_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_dR_HZ_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_dR_HZ_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_dR_HZ_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_dR_HZ_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_dR_HZ_stack_1","ZHcc","F");

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
   dR_HZ_algo_16->Modified();
   dR_HZ_algo_16->cd();
   dR_HZ_algo_16->SetSelected(dR_HZ_algo_16);
}

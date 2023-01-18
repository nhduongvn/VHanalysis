#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_alljet_all()
{
//=========Macro generated from canvas: H_dR_alljet_all/H_dR_alljet_all
//=========  (Wed Jan 18 11:40:26 2023) by ROOT version 6.26/06
   TCanvas *H_dR_alljet_all = new TCanvas("H_dR_alljet_all", "H_dR_alljet_all",0,0,600,600);
   H_dR_alljet_all->SetHighLightColor(2);
   H_dR_alljet_all->Range(-1.353788,-118.9091,7.264125,871.9997);
   H_dR_alljet_all->SetFillColor(0);
   H_dR_alljet_all->SetFillStyle(4000);
   H_dR_alljet_all->SetBorderMode(0);
   H_dR_alljet_all->SetBorderSize(2);
   H_dR_alljet_all->SetLeftMargin(0.15709);
   H_dR_alljet_all->SetRightMargin(0.1234783);
   H_dR_alljet_all->SetBottomMargin(0.12);
   H_dR_alljet_all->SetFrameFillStyle(1000);
   H_dR_alljet_all->SetFrameBorderMode(0);
   H_dR_alljet_all->SetFrameFillStyle(1000);
   H_dR_alljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(772.9088);
   
   TH1F *st_stack_216 = new TH1F("st_stack_216","",30,0,6);
   st_stack_216->SetMinimum(0);
   st_stack_216->SetMaximum(772.9088);
   st_stack_216->SetDirectory(0);
   st_stack_216->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_216->SetLineColor(ci);
   st_stack_216->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_216->GetXaxis()->SetRange(1,31);
   st_stack_216->GetXaxis()->SetLabelFont(42);
   st_stack_216->GetXaxis()->SetTitleOffset(1);
   st_stack_216->GetXaxis()->SetTitleFont(42);
   st_stack_216->GetYaxis()->SetTitle("Events/0.2");
   st_stack_216->GetYaxis()->SetLabelFont(42);
   st_stack_216->GetYaxis()->SetTitleSize(0.037);
   st_stack_216->GetYaxis()->SetTitleFont(42);
   st_stack_216->GetZaxis()->SetLabelFont(42);
   st_stack_216->GetZaxis()->SetTitleOffset(1);
   st_stack_216->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_216);
   
   
   TH1D *VbbHcc_alljet_H_dR_all_stack_1 = new TH1D("VbbHcc_alljet_H_dR_all_stack_1","",30,0,6);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(2,0.01366793);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(3,5.533068);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(4,11.53058);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(5,14.93124);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(6,19.65273);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(7,28.23563);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(8,38.26635);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(9,54.97987);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(10,80.33845);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(11,119.0858);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(12,172.1009);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(13,241.4511);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(14,329.389);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(15,422.5265);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(16,448.2716);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(17,168.7121);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(18,72.83998);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(19,37.27964);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(20,22.00568);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(21,13.02946);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(22,9.156261);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(23,6.407682);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(24,4.571473);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(25,3.29884);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(26,2.795857);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(27,2.111406);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(28,1.617117);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(29,1.408071);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(30,0.9521462);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinContent(31,3.138858);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(2,0.005460809);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(3,0.108543);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(4,0.1579);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(5,0.1788548);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(6,0.2052163);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(7,0.2475548);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(8,0.2888433);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(9,0.3456366);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(10,0.41919);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(11,0.5098146);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(12,0.614439);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(13,0.7281004);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(14,0.8505464);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(15,0.9639467);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(16,0.9922926);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(17,0.607092);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(18,0.3977284);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(19,0.2824571);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(20,0.2164907);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(21,0.1664948);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(22,0.1385562);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(23,0.1154168);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(24,0.0984833);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(25,0.08264208);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(26,0.07626685);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(27,0.06659814);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(28,0.05880393);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(29,0.05465723);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(30,0.04555501);
   VbbHcc_alljet_H_dR_all_stack_1->SetBinError(31,0.08426198);
   VbbHcc_alljet_H_dR_all_stack_1->SetEntries(1410242);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_alljet_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_alljet_H_dR_all_stack_2 = new TH1D("VbbHcc_alljet_H_dR_all_stack_2","",30,0,6);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(2,0.001569498);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(3,0.8132239);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(4,1.960159);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(5,2.689901);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(6,3.314639);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(7,3.655149);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(8,4.133249);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(9,4.933985);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(10,6.904479);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(11,10.90537);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(12,17.6969);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(13,28.77529);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(14,43.50507);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(15,59.76877);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(16,67.00095);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(17,30.75426);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(18,16.12378);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(19,9.486003);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(20,6.045318);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(21,3.992151);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(22,2.64609);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(23,1.848303);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(24,1.314305);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(25,0.9220882);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(26,0.6646772);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(27,0.4474079);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(28,0.3233556);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(29,0.2333664);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(30,0.160333);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinContent(31,0.3113487);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(2,0.0007517565);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(3,0.01524757);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(4,0.02365517);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(5,0.02816094);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(6,0.03125392);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(7,0.03255126);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(8,0.03470038);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(9,0.0377484);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(10,0.04465026);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(11,0.05640397);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(12,0.07185111);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(13,0.09180533);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(14,0.11291);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(15,0.1322545);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(16,0.1402837);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(17,0.09492065);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(18,0.06869742);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(19,0.05245528);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(20,0.04173383);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(21,0.03391213);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(22,0.02773348);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(23,0.02297052);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(24,0.01943024);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(25,0.01617945);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(26,0.01378651);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(27,0.01129719);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(28,0.009460113);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(29,0.008216371);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(30,0.006711723);
   VbbHcc_alljet_H_dR_all_stack_2->SetBinError(31,0.009361574);
   VbbHcc_alljet_H_dR_all_stack_2->SetEntries(1377680);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_alljet_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_H_dR_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_alljet_all->Modified();
   H_dR_alljet_all->cd();
   H_dR_alljet_all->SetSelected(H_dR_alljet_all);
}

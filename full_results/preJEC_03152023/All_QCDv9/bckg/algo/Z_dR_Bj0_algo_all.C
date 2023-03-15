#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Thu Mar  9 13:18:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(-1.310117,-194240.4,7.029799,1424430);
   Z_dR_Bj0_algo_all->SetFillColor(0);
   Z_dR_Bj0_algo_all->SetFillStyle(4000);
   Z_dR_Bj0_algo_all->SetBorderMode(0);
   Z_dR_Bj0_algo_all->SetBorderSize(2);
   Z_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1262563);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(0);
   st_stack_116->SetMaximum(1262563);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_116->GetXaxis()->SetRange(1,30);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetTitleOffset(1);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Event/0.2");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetTitleSize(0.037);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetTitleOffset(1);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,226691.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,1019252);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,671914.5);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,472905.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,271550.5);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,311975.6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,124465);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,104025.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,65964.36);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,46108.78);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,28526.94);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(12,22898.17);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(13,18702.82);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,8884.687);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(15,8294.525);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(16,5015.946);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(17,3419.068);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(18,2161.837);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(19,3435.433);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(20,979.4547);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(21,1566.369);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(22,716.1485);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(23,80.72473);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(24,54.88691);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(25,3206.107);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(26,21.36296);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,7002.65);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,40029.84);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,28145.67);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,22789.89);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,13425.89);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,56233.91);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,16993.73);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,27227.24);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,7690.699);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,6757.078);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,4696.195);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(12,4503.917);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(13,4126.163);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,2356.259);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(15,2426.387);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(16,2331.812);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(17,1863.701);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(18,1462.533);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(19,2133.383);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(20,471.393);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(21,1419.872);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(22,443.0043);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(23,40.86668);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(24,38.09927);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(25,2119.967);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(26,21.36296);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(72705);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,4072.05);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,28675.36);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,42364.45);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,37966.34);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,26803.76);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,17008.59);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,10590.61);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,6770.34);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,4471.007);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,3031.444);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,2071.304);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,1417.573);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,1000.089);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,692.2528);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,475.0367);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(16,331.4223);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(17,233.1005);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(18,161.1034);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(19,107.2112);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(20,78.51319);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(21,49.33149);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(22,38.42478);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(23,23.96202);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(24,16.23832);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(25,10.81241);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(26,7.451513);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(27,4.698804);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(28,3.949686);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(29,2.09282);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(30,1.647358);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(31,3.466848);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,15.86682);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,42.0868);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,51.10283);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,48.34502);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,40.60051);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,32.29558);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,25.45608);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,20.31841);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,16.49951);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,13.5788);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,11.1989);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,9.256283);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,7.771);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,6.469729);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,5.361371);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(16,4.485695);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(17,3.759378);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(18,3.125297);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(19,2.542168);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(20,2.168142);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(21,1.723062);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(22,1.53502);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(23,1.19993);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(24,0.9863176);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(25,0.8045267);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(26,0.6667414);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(27,0.5275092);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(28,0.4893237);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(29,0.347771);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(30,0.312823);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(31,0.4577426);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(3202080);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_all->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->SetSelected(Z_dR_Bj0_algo_all);
}

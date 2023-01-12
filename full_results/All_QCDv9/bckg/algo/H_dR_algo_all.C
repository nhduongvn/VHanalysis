#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_all()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Mon Dec 19 11:11:46 2022) by ROOT version 6.26/06
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(-1.353788,-545546.2,7.264125,4000672);
   H_dR_algo_all->SetFillColor(0);
   H_dR_algo_all->SetFillStyle(4000);
   H_dR_algo_all->SetBorderMode(0);
   H_dR_algo_all->SetBorderSize(2);
   H_dR_algo_all->SetLeftMargin(0.15709);
   H_dR_algo_all->SetRightMargin(0.1234783);
   H_dR_algo_all->SetBottomMargin(0.12);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3546050);
   
   TH1F *st_stack_80 = new TH1F("st_stack_80","",30,0,6);
   st_stack_80->SetMinimum(0);
   st_stack_80->SetMaximum(3546050);
   st_stack_80->SetDirectory(0);
   st_stack_80->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_80->SetLineColor(ci);
   st_stack_80->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_80->GetXaxis()->SetRange(1,31);
   st_stack_80->GetXaxis()->SetLabelFont(42);
   st_stack_80->GetXaxis()->SetTitleOffset(1);
   st_stack_80->GetXaxis()->SetTitleFont(42);
   st_stack_80->GetYaxis()->SetTitle("Events/0.2");
   st_stack_80->GetYaxis()->SetLabelFont(42);
   st_stack_80->GetYaxis()->SetTitleSize(0.037);
   st_stack_80->GetYaxis()->SetTitleFont(42);
   st_stack_80->GetZaxis()->SetLabelFont(42);
   st_stack_80->GetZaxis()->SetTitleOffset(1);
   st_stack_80->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_80);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(2,29.12165);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,1155518);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,1486059);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,1529198);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,1437402);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,1398483);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,1413977);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,1728724);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,1629041);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,1793338);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,1754638);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,2093326);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,2335721);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,1842651);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,1756176);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,1234084);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,795283.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,462373.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,243483.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,210083.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(22,124327.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(23,55925.13);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(24,36527.27);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(25,10079.14);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(26,3551.902);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(27,779.7201);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(28,29.29409);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(2,29.12165);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,73473.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,100788.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,124447.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,113442.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,110909.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,102960.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,121239.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,111160.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,123406.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,109495);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,135956.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,160549.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,122754.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,113723.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,115281.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,91382.14);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,68270.92);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,39924.02);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,45056.04);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(22,39921.81);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(23,24331.28);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(24,21215.17);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(25,3602.399);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(26,1631.321);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(27,454.0252);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(28,18.57339);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(124211);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(2,5.171539);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,8547.152);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,18752.32);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,27117.33);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,35311.72);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,38753.77);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,38165.71);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,36353.89);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,34845.42);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,34031.2);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,32963.07);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,31165.55);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,28312.37);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,25594.47);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,22409.05);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,13335.88);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,8237.004);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,5063.136);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,2986.715);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,1685.848);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,884.0764);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(23,461.7886);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(24,213.078);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(25,84.44982);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(26,29.61188);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(27,8.075807);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(28,1.452498);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(29,0.09347757);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(2,0.6174023);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,25.8274);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,37.94763);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,45.61025);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,52.42587);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,54.93319);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,55.23205);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,53.82408);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,53.15958);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,53.28073);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,51.79827);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,50.24304);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,47.96735);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,45.31226);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,42.07856);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,32.88838);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,25.71473);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,20.37141);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,14.93262);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,11.63878);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,7.970264);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(23,5.878883);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(24,4.010088);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(25,2.466082);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(26,1.443567);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(27,0.7639546);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(28,0.2979184);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(29,0.06634948);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(6577915);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_all_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_all/Z_dR_seljet_all
//=========  (Tue Feb 14 10:43:10 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_all = new TCanvas("Z_dR_seljet_all", "Z_dR_seljet_all",0,0,600,600);
   Z_dR_seljet_all->SetHighLightColor(2);
   Z_dR_seljet_all->Range(-1.310117,0.04100408,7.029799,4.697488);
   Z_dR_seljet_all->SetFillColor(0);
   Z_dR_seljet_all->SetFillStyle(4000);
   Z_dR_seljet_all->SetBorderMode(0);
   Z_dR_seljet_all->SetBorderSize(2);
   Z_dR_seljet_all->SetLogy();
   Z_dR_seljet_all->SetLeftMargin(0.15709);
   Z_dR_seljet_all->SetRightMargin(0.1234783);
   Z_dR_seljet_all->SetBottomMargin(0.12);
   Z_dR_seljet_all->SetFrameFillStyle(1000);
   Z_dR_seljet_all->SetFrameBorderMode(0);
   Z_dR_seljet_all->SetFrameFillStyle(1000);
   Z_dR_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(10624.15);
   
   TH1F *st_stack_276 = new TH1F("st_stack_276","",30,0,6);
   st_stack_276->SetMinimum(3.979075);
   st_stack_276->SetMaximum(17054.51);
   st_stack_276->SetDirectory(0);
   st_stack_276->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_276->SetLineColor(ci);
   st_stack_276->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_276->GetXaxis()->SetRange(1,30);
   st_stack_276->GetXaxis()->SetLabelFont(42);
   st_stack_276->GetXaxis()->SetTitleOffset(1);
   st_stack_276->GetXaxis()->SetTitleFont(42);
   st_stack_276->GetYaxis()->SetTitle("Events/0.2");
   st_stack_276->GetYaxis()->SetLabelFont(42);
   st_stack_276->GetYaxis()->SetTitleSize(0.037);
   st_stack_276->GetYaxis()->SetTitleFont(42);
   st_stack_276->GetZaxis()->SetLabelFont(42);
   st_stack_276->GetZaxis()->SetTitleOffset(1);
   st_stack_276->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_276);
   
   
   TH1D *VbbHcc_seljet_Z_dR_all_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(2,0.03275248);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(3,19.30115);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(4,33.91487);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(5,37.01477);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(6,42.50133);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(7,47.93304);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(8,52.09295);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(9,57.21365);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(10,60.42703);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(11,63.67786);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(12,68.02483);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(13,73.65757);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(14,78.64642);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(15,84.28147);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(16,81.00783);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(17,37.48071);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(18,20.31409);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(19,12.11825);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(20,7.936549);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(21,5.372804);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(22,3.490261);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(23,2.278126);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(24,1.323175);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(25,0.7844746);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(26,0.348855);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(27,0.128828);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(28,0.03224482);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(29,0.006854586);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(2,0.009764339);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(3,0.226428);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(4,0.3179112);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(5,0.3380655);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(6,0.3347282);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(7,0.3621246);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(8,0.3705433);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(9,0.3919067);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(10,0.3997343);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(11,0.429507);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(12,0.4227798);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(13,0.446863);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(14,0.4702187);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(15,0.4726883);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(16,0.4720355);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(17,0.3121033);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(18,0.2287528);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(19,0.1757638);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(20,0.1422044);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(21,0.1228232);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(22,0.09359081);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(23,0.07587213);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(24,0.05747555);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(25,0.04395835);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(26,0.02937768);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(27,0.01800244);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(28,0.008906653);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(29,0.004105426);
   VbbHcc_seljet_Z_dR_all_stack_1->SetEntries(394834);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_all_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(2,0.004546038);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(3,4.250889);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(4,7.725675);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(5,9.015328);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(6,11.0701);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(7,12.4144);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(8,13.47967);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(9,14.6148);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(10,15.69894);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(11,16.80378);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(12,17.9241);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(13,19.28113);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(14,20.68057);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(15,21.96);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(16,21.56322);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(17,11.28697);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(18,6.684294);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(19,4.193828);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(20,2.664792);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(21,1.785478);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(22,1.162502);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(23,0.6852081);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(24,0.4293983);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(25,0.2125533);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(26,0.1020474);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(27,0.05219586);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(28,0.01263271);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(29,0.0009307488);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(2,0.001162125);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(3,0.0385999);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(4,0.05145461);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(5,0.05492855);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(6,0.06177933);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(7,0.06669697);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(8,0.06765504);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(9,0.07254607);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(10,0.07335232);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(11,0.07687881);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(12,0.07816649);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(13,0.08097144);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(14,0.08502359);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(15,0.0867921);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(16,0.08570052);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(17,0.06387652);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(18,0.04761761);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(19,0.03729361);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(20,0.02973303);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(21,0.02497455);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(22,0.01949661);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(23,0.01491256);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(24,0.01200496);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(25,0.008595228);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(26,0.005707301);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(27,0.004116232);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(28,0.001976729);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(29,0.0004877768);
   VbbHcc_seljet_Z_dR_all_stack_2->SetEntries(776112);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_all_stack_1","ZHcc","F");

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
   Z_dR_seljet_all->Modified();
   Z_dR_seljet_all->cd();
   Z_dR_seljet_all->SetSelected(Z_dR_seljet_all);
}

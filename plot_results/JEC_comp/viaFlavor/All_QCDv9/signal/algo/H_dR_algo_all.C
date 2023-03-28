#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_all()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(-1.353788,-0.07167985,7.264125,0.5256523);
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
   st->SetMaximum(0.465919);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",30,0,6);
   st_stack_120->SetMinimum(0);
   st_stack_120->SetMaximum(0.465919);
   st_stack_120->SetDirectory(0);
   st_stack_120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_120->SetLineColor(ci);
   st_stack_120->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_120->GetXaxis()->SetRange(1,31);
   st_stack_120->GetXaxis()->SetLabelFont(42);
   st_stack_120->GetXaxis()->SetTitleOffset(1);
   st_stack_120->GetXaxis()->SetTitleFont(42);
   st_stack_120->GetYaxis()->SetTitle("Event/0.2");
   st_stack_120->GetYaxis()->SetLabelFont(42);
   st_stack_120->GetYaxis()->SetTitleSize(0.037);
   st_stack_120->GetYaxis()->SetTitleFont(42);
   st_stack_120->GetZaxis()->SetLabelFont(42);
   st_stack_120->GetZaxis()->SetTitleOffset(1);
   st_stack_120->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_120);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(1,0.00283072);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(2,0.003490267);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,0.04858235);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,0.1344317);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,0.2068133);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,0.3009823);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,0.2249069);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,0.1754615);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,0.109196);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,0.0838249);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,0.0700715);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,0.06136841);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,0.06654508);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,0.05112273);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,0.06818527);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,0.05902504);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,0.04001728);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,0.02590317);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,0.008037621);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,0.001916684);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,0.002582708);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(22,0.002420368);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(23,0.004221371);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(1,0.00283072);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(2,0.00291415);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,0.01059197);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,0.01852873);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,0.02283574);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,0.04734139);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,0.02372691);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,0.0216854);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,0.01702653);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,0.01436643);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,0.01269865);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,0.01256855);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,0.01323007);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,0.0108123);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,0.01307795);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,0.01268098);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,0.01058448);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,0.008132741);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,0.00471927);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,0.001916684);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,0.002582708);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(22,0.002420368);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(23,0.003429959);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(776);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);
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
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(1,0.000897535);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(2,0.001762302);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,0.0141876);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,0.03798398);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,0.06826193);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,0.08573051);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,0.0885296);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,0.07312569);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,0.04379339);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,0.03093326);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,0.02507337);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,0.01769486);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,0.02180305);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,0.01647607);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,0.02341971);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,0.0177386);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,0.01226782);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,0.008175549);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,0.005122233);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,0.0046879);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,0.00223069);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,0.00113289);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(1,0.0005515487);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(2,0.0006555295);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,0.002126424);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,0.003442238);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,0.004659884);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,0.00608817);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,0.005363976);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,0.004864571);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,0.003769949);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,0.003233783);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,0.002779839);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,0.002366497);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,0.002632951);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,0.002340745);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,0.002775852);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,0.002395163);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,0.001983223);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,0.001628226);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,0.001309619);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,0.001399595);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,0.0008026467);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,0.0006705887);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(2016);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}

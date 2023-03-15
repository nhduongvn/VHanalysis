#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_all()
{
//=========Macro generated from canvas: Sphericity_algo_all/Sphericity_algo_all
//=========  (Thu Mar  9 13:09:06 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_all = new TCanvas("Sphericity_algo_all", "Sphericity_algo_all",0,0,600,600);
   Sphericity_algo_all->SetHighLightColor(2);
   Sphericity_algo_all->Range(-0.2183529,-0.09956228,1.171633,0.7301234);
   Sphericity_algo_all->SetFillColor(0);
   Sphericity_algo_all->SetFillStyle(4000);
   Sphericity_algo_all->SetBorderMode(0);
   Sphericity_algo_all->SetBorderSize(2);
   Sphericity_algo_all->SetLeftMargin(0.15709);
   Sphericity_algo_all->SetRightMargin(0.1234783);
   Sphericity_algo_all->SetBottomMargin(0.12);
   Sphericity_algo_all->SetFrameFillStyle(1000);
   Sphericity_algo_all->SetFrameBorderMode(0);
   Sphericity_algo_all->SetFrameFillStyle(1000);
   Sphericity_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.6471548);
   
   TH1F *st_stack_124 = new TH1F("st_stack_124","",25,0,1);
   st_stack_124->SetMinimum(0);
   st_stack_124->SetMaximum(0.6471548);
   st_stack_124->SetDirectory(0);
   st_stack_124->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_124->SetLineColor(ci);
   st_stack_124->GetXaxis()->SetTitle("Sphericity");
   st_stack_124->GetXaxis()->SetRange(1,25);
   st_stack_124->GetXaxis()->SetLabelFont(42);
   st_stack_124->GetXaxis()->SetTitleOffset(1);
   st_stack_124->GetXaxis()->SetTitleFont(42);
   st_stack_124->GetYaxis()->SetTitle("Event/0.04");
   st_stack_124->GetYaxis()->SetLabelFont(42);
   st_stack_124->GetYaxis()->SetTitleSize(0.037);
   st_stack_124->GetYaxis()->SetTitleFont(42);
   st_stack_124->GetZaxis()->SetLabelFont(42);
   st_stack_124->GetZaxis()->SetTitleOffset(1);
   st_stack_124->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_124);
   
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_1 = new TH1D("VbbHcc_algo_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(1,0.02689586);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(2,0.1616918);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(3,0.3168678);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(4,0.3846513);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(5,0.3717626);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(6,0.3611367);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(7,0.3678449);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(8,0.3440792);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(9,0.4014012);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(10,0.3106459);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(11,0.2891631);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(12,0.2522751);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(13,0.2375988);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(14,0.1790535);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(15,0.2389176);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(16,0.154131);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(17,0.1329692);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(18,0.09675047);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(19,0.06224404);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(20,0.02349833);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(21,0.01179665);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(22,0.004021771);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(1,0.008182091);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(2,0.02019269);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(3,0.02832056);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(4,0.04967656);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(5,0.03045465);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(6,0.03115665);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(7,0.03003784);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(8,0.02961467);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(9,0.03169202);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(10,0.02760191);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(11,0.02716575);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(12,0.02461608);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(13,0.025493);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(14,0.02206744);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(15,0.0245775);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(16,0.01976213);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(17,0.01898369);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(18,0.01502747);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(19,0.01217419);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(20,0.007246904);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(21,0.005405188);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(22,0.002843846);
   VbbHcc_algo_Sphericity_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_2 = new TH1D("VbbHcc_algo_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(1,0.01143243);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(2,0.0569314);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(3,0.09524677);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(4,0.1331201);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(5,0.1290023);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(6,0.1403733);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(7,0.1409777);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(8,0.1322377);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(9,0.1357373);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(10,0.1099647);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(11,0.1065499);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(12,0.09590984);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(13,0.08749962);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(14,0.07384677);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(15,0.06023837);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(16,0.05066418);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(17,0.04075529);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(18,0.03103403);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(19,0.0159895);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(20,0.008655907);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(21,0.002394063);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(22,0.0002639519);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(1,0.001915826);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(2,0.004329132);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(3,0.005418589);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(4,0.006585276);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(5,0.006384512);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(6,0.006695754);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(7,0.006951425);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(8,0.007046775);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(9,0.006603431);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(10,0.00595447);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(11,0.006412274);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(12,0.0056219);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(13,0.005360466);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(14,0.00493804);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(15,0.00509132);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(16,0.004429207);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(17,0.003612851);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(18,0.003152079);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(19,0.002233922);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(20,0.001729046);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(21,0.0008313827);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(22,0.0002639519);
   VbbHcc_algo_Sphericity_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_all->Modified();
   Sphericity_algo_all->cd();
   Sphericity_algo_all->SetSelected(Sphericity_algo_all);
}

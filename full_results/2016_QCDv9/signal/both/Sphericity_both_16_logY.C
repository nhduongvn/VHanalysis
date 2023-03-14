#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Mar  9 13:08:27 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2183529,-3.70447,1.171633,0.1416838);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetFillStyle(4000);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15709);
   Sphericity_both_16->SetRightMargin(0.1234783);
   Sphericity_both_16->SetBottomMargin(0.12);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(0.5982641);
   
   TH1F *st_stack_185 = new TH1F("st_stack_185","",25,0,1);
   st_stack_185->SetMinimum(1.12556);
   st_stack_185->SetMaximum(0.5715687);
   st_stack_185->SetDirectory(0);
   st_stack_185->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_185->SetLineColor(ci);
   st_stack_185->GetXaxis()->SetTitle("Sphericity");
   st_stack_185->GetXaxis()->SetRange(1,25);
   st_stack_185->GetXaxis()->SetLabelFont(42);
   st_stack_185->GetXaxis()->SetTitleOffset(1);
   st_stack_185->GetXaxis()->SetTitleFont(42);
   st_stack_185->GetYaxis()->SetTitle("Event/0.04");
   st_stack_185->GetYaxis()->SetLabelFont(42);
   st_stack_185->GetYaxis()->SetTitleSize(0.037);
   st_stack_185->GetYaxis()->SetTitleFont(42);
   st_stack_185->GetZaxis()->SetLabelFont(42);
   st_stack_185->GetZaxis()->SetTitleOffset(1);
   st_stack_185->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_185);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,0.03715755);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,0.1753353);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,0.2773721);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,0.3456231);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,0.3619289);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,0.3052207);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,0.3167972);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,0.2623419);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,0.2395614);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,0.2409147);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,0.2412501);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,0.1527072);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,0.1978398);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,0.1761315);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,0.1682142);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,0.1276397);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,0.1026524);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,0.08437092);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,0.05823655);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,0.02326467);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,0.002909221);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,0.009918859);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,0.02225202);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,0.02824314);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,0.03196688);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,0.03265341);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,0.03030076);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,0.03088977);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,0.02794878);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,0.0265997);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,0.02677452);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,0.02662241);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,0.02187656);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,0.02399555);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,0.02364309);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,0.02239557);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,0.01985825);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,0.01766906);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,0.0159063);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,0.01300926);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,0.008246545);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,0.002909221);
   VbbHcc_both_Sphericity_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,0.02627549);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,0.07471238);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,0.1181481);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,0.1319866);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,0.1346303);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,0.1281582);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,0.1349814);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,0.1404765);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,0.126225);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,0.110601);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,0.1039226);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,0.08605599);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,0.08600476);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,0.0562211);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,0.05526907);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,0.04740542);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,0.03395717);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,0.03414405);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,0.01125967);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.008250748);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.0025972);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,0.00308869);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,0.005289091);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,0.00666826);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,0.007080339);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,0.007132732);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,0.006991982);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,0.007182125);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,0.007351566);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,0.006972252);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,0.006514038);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,0.006327399);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,0.005736132);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,0.005751441);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,0.004643005);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,0.00456401);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,0.004273271);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.003574848);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.003618908);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.002104095);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.001803502);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.0009835591);
   VbbHcc_both_Sphericity_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}

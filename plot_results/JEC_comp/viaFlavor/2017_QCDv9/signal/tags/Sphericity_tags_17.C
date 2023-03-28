#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Mon Mar 27 11:09:49 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2183529,-0.138988,1.171633,1.019246);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetFillStyle(4000);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15709);
   Sphericity_tags_17->SetRightMargin(0.1234783);
   Sphericity_tags_17->SetBottomMargin(0.12);
   Sphericity_tags_17->SetFrameFillStyle(1000);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameFillStyle(1000);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.9034222);
   
   TH1F *st_stack_58 = new TH1F("st_stack_58","",25,0,1);
   st_stack_58->SetMinimum(0);
   st_stack_58->SetMaximum(0.9034222);
   st_stack_58->SetDirectory(0);
   st_stack_58->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_58->SetLineColor(ci);
   st_stack_58->GetXaxis()->SetTitle("Sphericity");
   st_stack_58->GetXaxis()->SetRange(1,25);
   st_stack_58->GetXaxis()->SetLabelFont(42);
   st_stack_58->GetXaxis()->SetTitleOffset(1);
   st_stack_58->GetXaxis()->SetTitleFont(42);
   st_stack_58->GetYaxis()->SetTitle("Event/0.04");
   st_stack_58->GetYaxis()->SetLabelFont(42);
   st_stack_58->GetYaxis()->SetTitleSize(0.037);
   st_stack_58->GetYaxis()->SetTitleFont(42);
   st_stack_58->GetZaxis()->SetLabelFont(42);
   st_stack_58->GetZaxis()->SetTitleOffset(1);
   st_stack_58->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_58);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,0.08400253);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,0.352792);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,0.4946917);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,0.5407604);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,0.4795039);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,0.2776491);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,0.1722623);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,0.09443149);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,0.1012408);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,0.0654353);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,0.07630191);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,0.02948268);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,0.03709031);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,0.02277861);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,0.01842273);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,0.01784736);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,0.008813569);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,0.003977345);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,0.005767475);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,0.01237945);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,0.02552209);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,0.03093524);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,0.03215126);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,0.03014384);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,0.02284091);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,0.01770571);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,0.01318795);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,0.01393795);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,0.01132788);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,0.01198507);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,0.007347024);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,0.00818828);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,0.006407768);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,0.00587888);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,0.005756451);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,0.003958521);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,0.002848689);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,0.00333192);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(1686);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,0.05917615);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,0.1751051);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,0.2115478);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,0.20908);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,0.1494591);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,0.1065497);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,0.06706762);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,0.05208215);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,0.03741604);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,0.03106526);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,0.02235649);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,0.017394);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,0.01701309);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,0.009664822);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,0.01311713);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.006577435);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.003534253);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.004166373);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.002844582);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,0.0005543254);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,0.0003860433);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,0.003716377);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,0.006459778);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,0.007093784);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,0.007083396);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,0.005966728);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,0.00509575);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,0.004023935);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,0.003503273);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.003001122);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.002759225);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.002330023);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.002066235);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.002045604);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.001521429);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.001775986);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.001282198);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.0009280226);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.00102006);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.000834709);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.0003937382);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.000278031);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(5229);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}

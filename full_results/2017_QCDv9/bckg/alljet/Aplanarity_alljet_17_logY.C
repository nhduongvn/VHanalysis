#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_17_logY()
{
//=========Macro generated from canvas: Aplanarity_alljet_17/Aplanarity_alljet_17
//=========  (Wed Jan 18 11:42:56 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_17 = new TCanvas("Aplanarity_alljet_17", "Aplanarity_alljet_17",0,0,600,600);
   Aplanarity_alljet_17->SetHighLightColor(2);
   Aplanarity_alljet_17->Range(-0.2183529,-2.090369,1.171633,16.37673);
   Aplanarity_alljet_17->SetFillColor(0);
   Aplanarity_alljet_17->SetFillStyle(4000);
   Aplanarity_alljet_17->SetBorderMode(0);
   Aplanarity_alljet_17->SetBorderSize(2);
   Aplanarity_alljet_17->SetLogy();
   Aplanarity_alljet_17->SetLeftMargin(0.15709);
   Aplanarity_alljet_17->SetRightMargin(0.1234783);
   Aplanarity_alljet_17->SetBottomMargin(0.12);
   Aplanarity_alljet_17->SetFrameFillStyle(1000);
   Aplanarity_alljet_17->SetFrameBorderMode(0);
   Aplanarity_alljet_17->SetFrameFillStyle(1000);
   Aplanarity_alljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(9.426196e+13);
   
   TH1F *st_stack_254 = new TH1F("st_stack_254","",50,0,1);
   st_stack_254->SetMinimum(1.335618);
   st_stack_254->SetMaximum(3.388592e+14);
   st_stack_254->SetDirectory(0);
   st_stack_254->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_254->SetLineColor(ci);
   st_stack_254->GetXaxis()->SetTitle("Aplanarity");
   st_stack_254->GetXaxis()->SetRange(1,50);
   st_stack_254->GetXaxis()->SetLabelFont(42);
   st_stack_254->GetXaxis()->SetTitleOffset(1);
   st_stack_254->GetXaxis()->SetTitleFont(42);
   st_stack_254->GetYaxis()->SetTitle("Events/0.02");
   st_stack_254->GetYaxis()->SetLabelFont(42);
   st_stack_254->GetYaxis()->SetTitleSize(0.037);
   st_stack_254->GetYaxis()->SetTitleFont(42);
   st_stack_254->GetZaxis()->SetLabelFont(42);
   st_stack_254->GetZaxis()->SetTitleOffset(1);
   st_stack_254->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_254);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(0,43792.4);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,9.426036e+11);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,7.268694e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,2.637902e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,1.272294e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,7.025333e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,4.170556e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,2.609572e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,1.669534e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,1.096733e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,7.223827e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,4.732758e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,3.107556e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,2.076913e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.345118e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,8.320329e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,5.318184e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,3.219622e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,1.735786e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,9503432);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,4874784);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,1969737);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,706488.1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(23,267684.5);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(24,40937.78);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(0,21504.88);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,1.233677e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,3.382944e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,2.031826e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,1.409299e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,1.047073e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,8070407);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,6388846);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,5110467);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,4147585);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,3362514);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,2724187);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,2206797);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,1807201);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,1453157);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,1145307);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,916378.7);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,712836.1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,519292.6);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,387117.8);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,278741);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,175368.1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,103354.4);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(23,65736.67);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(24,25441.85);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(2.563614e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(0,1.506803);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,1.60051e+07);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,6836074);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,4083714);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,2685182);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,1851838);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,1309631);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,940265.7);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,678869.4);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,491340.3);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,354416.1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,254009.1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,179866.7);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,125743.2);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,86028.23);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,57409.54);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,37231.54);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,23153.56);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,13657.23);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,7564.002);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,3826.988);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,1694.532);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(22,623.578);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(23,163.9791);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(24,28.60081);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(25,1.035233);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(0,0.3168249);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,1021.66);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,681.8805);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,530.1699);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,431.0564);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,358.5167);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,301.7837);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,255.9107);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,217.5371);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,185.1683);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,157.3162);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,133.2331);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,112.114);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,93.7884);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,77.5805);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,63.38831);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,51.08309);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,40.27062);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,30.92748);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,23.0353);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,16.37725);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,10.89566);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(22,6.595763);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(23,3.397608);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(24,1.439227);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(25,0.2613755);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(6.050089e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_alljet_17->Modified();
   Aplanarity_alljet_17->cd();
   Aplanarity_alljet_17->SetSelected(Aplanarity_alljet_17);
}

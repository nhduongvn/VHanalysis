#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_17_logY()
{
//=========Macro generated from canvas: CvL_jets_17/CvL_jets_17
//=========  (Mon Dec 19 11:02:03 2022) by ROOT version 6.26/06
   TCanvas *CvL_jets_17 = new TCanvas("CvL_jets_17", "CvL_jets_17",0,0,600,600);
   CvL_jets_17->SetHighLightColor(2);
   CvL_jets_17->Range(-0.2183529,4.839879,1.171633,15.31129);
   CvL_jets_17->SetFillColor(0);
   CvL_jets_17->SetFillStyle(4000);
   CvL_jets_17->SetBorderMode(0);
   CvL_jets_17->SetBorderSize(2);
   CvL_jets_17->SetLogy();
   CvL_jets_17->SetLeftMargin(0.15709);
   CvL_jets_17->SetRightMargin(0.1234783);
   CvL_jets_17->SetBottomMargin(0.12);
   CvL_jets_17->SetFrameFillStyle(1000);
   CvL_jets_17->SetFrameBorderMode(0);
   CvL_jets_17->SetFrameFillStyle(1000);
   CvL_jets_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(5696370);
   st->SetMaximum(7.576723e+13);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",20,0,1);
   st_stack_10->SetMinimum(1248672);
   st_stack_10->SetMaximum(1.837186e+14);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_10->GetXaxis()->SetRange(1,20);
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetTitleOffset(1);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Events/0.05");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetTitleSize(0.037);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetTitleOffset(1);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,7.576447e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,7.451927e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,2.038023e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,7.530234e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,3.937841e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,2.513934e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,1.744184e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,1.265787e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,1.006019e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,8.450074e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,7.280822e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,6.402299e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,5.903065e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,5.694054e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,5.808404e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,6.229236e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,6.881919e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,8.441934e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,1.140099e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,3.183387e+10);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,1.069608e+08);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,1.063927e+08);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,5.563559e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,3.371346e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,2.436959e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,1.946343e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,1.621139e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,1.38033e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,1.230695e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,1.127428e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,1.045588e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,9796898);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,9397050);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,9228978);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,9308153);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,9631376);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,1.010461e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,1.118424e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,1.298167e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,2.170898e+07);
   VbbHcc_jets_CvL_stack_1->SetEntries(7.974729e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_CvL_stack_2 = new TH1D("VbbHcc_jets_CvL_stack_2","",20,0,1);
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,2.757524e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,3.632526e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,1.281442e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,5918948);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,3658263);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,2765141);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,2270920);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,1958602);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,1819794);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,1787843);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,1816385);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,1885398);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,2061306);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,2316467);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,2712940);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,3308240);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,4128974);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,5541722);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,7867719);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,1.78619e+07);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,1383.576);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,1593.005);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,943.747);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,640.1499);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,501.6254);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,434.8901);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,393.2548);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,364.5375);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,350.8562);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,347.2634);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,349.5005);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,355.5569);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,371.2014);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,393.0885);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,424.9982);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,468.9722);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,523.5167);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,606.1445);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,722.1098);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,1092.21);
   VbbHcc_jets_CvL_stack_2->SetEntries(2.399997e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvL_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvL_stack_1","QCD","F");

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
   CvL_jets_17->Modified();
   CvL_jets_17->cd();
   CvL_jets_17->SetSelected(CvL_jets_17);
}

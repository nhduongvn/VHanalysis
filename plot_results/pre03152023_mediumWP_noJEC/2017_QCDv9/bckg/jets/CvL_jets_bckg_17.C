#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_bckg_17()
{
//=========Macro generated from canvas: CvL_jets_bckg_17/CvL_jets_bckg_17
//=========  (Thu Mar  9 13:30:49 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_bckg_17 = new TCanvas("CvL_jets_bckg_17", "CvL_jets_bckg_17",0,0,600,600);
   CvL_jets_bckg_17->SetHighLightColor(2);
   CvL_jets_bckg_17->Range(-0.2183529,-7.573046e+10,1.171633,5.553567e+11);
   CvL_jets_bckg_17->SetFillColor(0);
   CvL_jets_bckg_17->SetFillStyle(4000);
   CvL_jets_bckg_17->SetBorderMode(0);
   CvL_jets_bckg_17->SetBorderSize(2);
   CvL_jets_bckg_17->SetLeftMargin(0.15709);
   CvL_jets_bckg_17->SetRightMargin(0.1234783);
   CvL_jets_bckg_17->SetBottomMargin(0.12);
   CvL_jets_bckg_17->SetFrameFillStyle(1000);
   CvL_jets_bckg_17->SetFrameBorderMode(0);
   CvL_jets_bckg_17->SetFrameFillStyle(1000);
   CvL_jets_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.92248e+11);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",20,0,1);
   st_stack_16->SetMinimum(0);
   st_stack_16->SetMaximum(4.92248e+11);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_16->GetXaxis()->SetRange(1,20);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Event/0.05");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetTitleSize(0.037);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,4.085459e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,3.197787e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,8.377189e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,3.330497e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,1.756674e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,1.126626e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,7.875592e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,5.756106e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,4.598041e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,3.891173e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,3.402397e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,3.038153e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,2.819504e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,2.757767e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,2.873525e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,3.120772e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,3.492511e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,4.308912e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,5.818545e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,1.70577e+10);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,7.640719e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,6.712873e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,3.42656e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,2.156412e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,1.565509e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,1.253165e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,1.047954e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,8952531);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,8007249);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,7365537);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,6877388);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,6495464);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,6248013);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,6182131);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,6307483);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,6566933);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,6933364);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,7692460);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,8914544);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,1.534357e+07);
   VbbHcc_jets_CvL_stack_1->SetEntries(6.351199e+08);

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
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,1.989171e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,2.370031e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,8457565);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,4122242);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,2589641);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,1986679);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,1655023);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,1447542);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,1356234);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,1343717);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,1381321);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,1449558);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,1599695);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,1812203);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,2142138);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,2635562);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,3312766);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,4468228);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,6354792);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,1.434607e+07);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,1183.825);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,1297.049);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,772.9073);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,538.1445);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,425.0186);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,371.0804);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,337.8081);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,315.2462);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,304.6232);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,302.751);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,306.4757);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,313.4543);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,328.6931);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,349.4175);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,379.4694);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,420.537);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,471.0808);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,546.7309);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,651.8712);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,983.39);
   VbbHcc_jets_CvL_stack_2->SetEntries(1.727621e+09);

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_bckg_17->Modified();
   CvL_jets_bckg_17->cd();
   CvL_jets_bckg_17->SetSelected(CvL_jets_bckg_17);
}

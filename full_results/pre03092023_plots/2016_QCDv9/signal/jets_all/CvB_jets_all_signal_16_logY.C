#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_signal_16_logY()
{
//=========Macro generated from canvas: CvB_jets_all_signal_16/CvB_jets_all_signal_16
//=========  (Wed Mar  1 14:06:43 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_signal_16 = new TCanvas("CvB_jets_all_signal_16", "CvB_jets_all_signal_16",0,0,600,600);
   CvB_jets_all_signal_16->SetHighLightColor(2);
   CvB_jets_all_signal_16->Range(-0.2183529,-0.1481936,1.171633,5.586263);
   CvB_jets_all_signal_16->SetFillColor(0);
   CvB_jets_all_signal_16->SetFillStyle(4000);
   CvB_jets_all_signal_16->SetBorderMode(0);
   CvB_jets_all_signal_16->SetBorderSize(2);
   CvB_jets_all_signal_16->SetLogy();
   CvB_jets_all_signal_16->SetLeftMargin(0.15709);
   CvB_jets_all_signal_16->SetRightMargin(0.1234783);
   CvB_jets_all_signal_16->SetBottomMargin(0.12);
   CvB_jets_all_signal_16->SetFrameFillStyle(1000);
   CvB_jets_all_signal_16->SetFrameBorderMode(0);
   CvB_jets_all_signal_16->SetFrameFillStyle(1000);
   CvB_jets_all_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(58727.91);
   
   TH1F *st_stack_175 = new TH1F("st_stack_175","",20,0,1);
   st_stack_175->SetMinimum(3.466899);
   st_stack_175->SetMaximum(102995.2);
   st_stack_175->SetDirectory(0);
   st_stack_175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_175->SetLineColor(ci);
   st_stack_175->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_175->GetXaxis()->SetRange(1,20);
   st_stack_175->GetXaxis()->SetLabelFont(42);
   st_stack_175->GetXaxis()->SetTitleOffset(1);
   st_stack_175->GetXaxis()->SetTitleFont(42);
   st_stack_175->GetYaxis()->SetTitle("Events/0.05");
   st_stack_175->GetYaxis()->SetLabelFont(42);
   st_stack_175->GetYaxis()->SetTitleSize(0.037);
   st_stack_175->GetYaxis()->SetTitleFont(42);
   st_stack_175->GetZaxis()->SetLabelFont(42);
   st_stack_175->GetZaxis()->SetTitleOffset(1);
   st_stack_175->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_175);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,81.7168);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,22.41756);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,18.53385);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,20.43221);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,24.21319);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,29.21543);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,37.04092);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,47.2067);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,64.18577);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,95.74874);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,167.5781);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,437.2605);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,480.7864);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,366.6912);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,380.4044);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,410.4875);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,456.1095);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,496.0695);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,392.9418);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,61.31224);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,0.5014499);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,0.2626955);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,0.2388709);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,0.2505206);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,0.2732077);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,0.2994639);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,0.3369971);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,0.3807418);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,0.4425262);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,0.5415193);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,0.716768);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.158499);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.213662);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,1.062996);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,1.084203);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,1.12201);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.181737);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.232361);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,1.099963);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,0.4349013);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(1514033);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_stack_2 = new TH1D("VbbHcc_jets_all_CvB_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,15.86981);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,3.835782);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,3.065959);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,3.259293);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,3.784627);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,4.48714);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,5.422789);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,6.963091);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,9.388986);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,13.92818);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,23.91251);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,61.92308);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,67.56633);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,51.26711);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,54.00233);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,63.20028);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,76.32138);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,91.20961);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,75.16155);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,14.21007);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,0.07803351);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,0.03827721);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,0.03423277);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,0.03530491);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,0.0380037);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,0.04133127);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,0.04539356);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,0.05143994);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,0.05971009);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,0.07263587);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,0.09512341);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,0.1529107);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,0.1595366);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,0.1391777);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,0.1431872);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,0.1550968);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,0.1705925);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,0.1867358);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,0.1698516);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,0.07395062);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(1742042);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all_signal_16->Modified();
   CvB_jets_all_signal_16->cd();
   CvB_jets_all_signal_16->SetSelected(CvB_jets_all_signal_16);
}

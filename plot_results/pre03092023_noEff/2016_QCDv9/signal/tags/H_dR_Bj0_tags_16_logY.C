#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_16/H_dR_Bj0_tags_16
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_tags_16 = new TCanvas("H_dR_Bj0_tags_16", "H_dR_Bj0_tags_16",0,0,600,600);
   H_dR_Bj0_tags_16->SetHighLightColor(2);
   H_dR_Bj0_tags_16->Range(-1.310117,-0.0980166,7.029799,0.7187884);
   H_dR_Bj0_tags_16->SetFillColor(0);
   H_dR_Bj0_tags_16->SetFillStyle(4000);
   H_dR_Bj0_tags_16->SetBorderMode(0);
   H_dR_Bj0_tags_16->SetBorderSize(2);
   H_dR_Bj0_tags_16->SetLogy();
   H_dR_Bj0_tags_16->SetLeftMargin(0.15709);
   H_dR_Bj0_tags_16->SetRightMargin(0.1234783);
   H_dR_Bj0_tags_16->SetBottomMargin(0.12);
   H_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   H_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_41 = new TH1F("st_stack_41","",30,0,6);
   st_stack_41->SetMinimum(-2.433985e+09);
   st_stack_41->SetMaximum(-0.6331003);
   st_stack_41->SetDirectory(0);
   st_stack_41->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_41->SetLineColor(ci);
   st_stack_41->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_41->GetXaxis()->SetRange(1,30);
   st_stack_41->GetXaxis()->SetLabelFont(42);
   st_stack_41->GetXaxis()->SetTitleOffset(1);
   st_stack_41->GetXaxis()->SetTitleFont(42);
   st_stack_41->GetYaxis()->SetTitle("Event/0.2");
   st_stack_41->GetYaxis()->SetLabelFont(42);
   st_stack_41->GetYaxis()->SetTitleSize(0.037);
   st_stack_41->GetYaxis()->SetTitleFont(42);
   st_stack_41->GetZaxis()->SetLabelFont(42);
   st_stack_41->GetZaxis()->SetTitleOffset(1);
   st_stack_41->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_41);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,0.05983582);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,0.3590149);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,0.4227111);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,0.3937583);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,0.3126904);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,0.1910886);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,0.1524848);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,0.1216018);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,0.1061603);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,0.07334713);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,0.05790563);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,0.07720751);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,0.05404526);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,0.05404526);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,0.0463245);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,0.05790563);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,0.01158113);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,0.0154415);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,0.01737169);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,0.0154415);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,0.001930188);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,0.003860375);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,0.001930188);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,0.003860375);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,0.001930188);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,0.01074683);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,0.02632425);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,0.02856417);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,0.02756859);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,0.02456728);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,0.01920513);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,0.01715588);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,0.01532039);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,0.01431466);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,0.01189848);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,0.01057207);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,0.01220758);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,0.01021359);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,0.01021359);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,0.00945595);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,0.01057207);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,0.004727975);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,0.005459395);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,0.005790563);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,0.005459395);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,0.001930188);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,0.002729698);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,0.001930188);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,0.002729698);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,0.001930188);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,0.02697841);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,0.140439);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,0.1840583);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,0.174225);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,0.1232938);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,0.09051634);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,0.06505074);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,0.05269614);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,0.03681166);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,0.02823908);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,0.02823908);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,0.02723054);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,0.02344852);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,0.02193571);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,0.01916223);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,0.01386741);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,0.009581117);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,0.007816174);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,0.004034154);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,0.003025616);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,0.001764943);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,0.003025616);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,0.001260673);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,0.0007564039);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,0.001008539);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,0.0005042693);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,0.0005042693);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.0002521346);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,0.002608101);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,0.005950591);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,0.006812303);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,0.006627833);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,0.00557554);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,0.00477727);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,0.004049882);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,0.003645068);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,0.003046555);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,0.002668342);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,0.002668342);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,0.00262026);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,0.002431498);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,0.002351755);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,0.002198059);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,0.001869881);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,0.001554262);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,0.001403826);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,0.001008539);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,0.00087342);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,0.0006670856);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.00087342);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.0005637902);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.00043671);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.0005042693);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.0003565722);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.0003565722);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.0002521346);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_tags_16->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->SetSelected(H_dR_Bj0_tags_16);
}

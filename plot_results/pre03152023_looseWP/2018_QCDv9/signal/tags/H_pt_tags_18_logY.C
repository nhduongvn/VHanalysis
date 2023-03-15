#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_18_logY()
{
//=========Macro generated from canvas: H_pt_tags_18/H_pt_tags_18
//=========  (Fri Mar 10 11:27:12 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_18 = new TCanvas("H_pt_tags_18", "H_pt_tags_18",0,0,600,600);
   H_pt_tags_18->SetHighLightColor(2);
   H_pt_tags_18->Range(37.97653,-0.4647357,1705.96,1.601415);
   H_pt_tags_18->SetFillColor(0);
   H_pt_tags_18->SetFillStyle(4000);
   H_pt_tags_18->SetBorderMode(0);
   H_pt_tags_18->SetBorderSize(2);
   H_pt_tags_18->SetLogy();
   H_pt_tags_18->SetLeftMargin(0.15709);
   H_pt_tags_18->SetRightMargin(0.1234783);
   H_pt_tags_18->SetBottomMargin(0.12);
   H_pt_tags_18->SetFrameFillStyle(1000);
   H_pt_tags_18->SetFrameBorderMode(0);
   H_pt_tags_18->SetFrameFillStyle(1000);
   H_pt_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(19.71464);
   
   TH1F *st_stack_15 = new TH1F("st_stack_15","",40,0,2000);
   st_stack_15->SetMinimum(0.6070192);
   st_stack_15->SetMaximum(24.8199);
   st_stack_15->SetDirectory(0);
   st_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_15->SetLineColor(ci);
   st_stack_15->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_15->GetXaxis()->SetRange(7,30);
   st_stack_15->GetXaxis()->SetLabelFont(42);
   st_stack_15->GetXaxis()->SetTitleOffset(1);
   st_stack_15->GetXaxis()->SetTitleFont(42);
   st_stack_15->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_15->GetYaxis()->SetLabelFont(42);
   st_stack_15->GetYaxis()->SetTitleSize(0.037);
   st_stack_15->GetYaxis()->SetTitleFont(42);
   st_stack_15->GetZaxis()->SetLabelFont(42);
   st_stack_15->GetZaxis()->SetTitleOffset(1);
   st_stack_15->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_15);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,9.009386);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,16.36315);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,16.29957);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,9.963356);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,5.53294);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,3.335515);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,1.823789);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,1.149845);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.5784135);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.319826);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.1789503);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.1128034);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,0.04757702);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,0.03093582);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(15,0.02449127);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(16,0.02366409);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(17,0.02530764);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(18,0.00599502);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(19,0.002582708);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(20,0.01361146);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(23,0.002532203);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(24,0.002840873);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.1618541);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.2402316);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.2207337);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.1742167);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.1347344);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.09853035);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.07217339);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.0595851);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.04025837);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.03958233);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.02144938);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.01755296);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,0.01199921);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,0.008975153);
   VbbHcc_tags_H_pt_stack_1->SetBinError(15,0.008014516);
   VbbHcc_tags_H_pt_stack_1->SetBinError(16,0.009119237);
   VbbHcc_tags_H_pt_stack_1->SetBinError(17,0.008554782);
   VbbHcc_tags_H_pt_stack_1->SetBinError(18,0.003580091);
   VbbHcc_tags_H_pt_stack_1->SetBinError(19,0.002582708);
   VbbHcc_tags_H_pt_stack_1->SetBinError(20,0.01142554);
   VbbHcc_tags_H_pt_stack_1->SetBinError(23,0.002532203);
   VbbHcc_tags_H_pt_stack_1->SetBinError(24,0.002840873);
   VbbHcc_tags_H_pt_stack_1->SetEntries(25720);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_stack_1->SetFillColor(ci);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_2 = new TH1D("VbbHcc_tags_H_pt_stack_2","",40,0,2000);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,2.748988);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,5.443685);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,6.434281);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,4.823352);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,2.77122);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,1.483198);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.7441284);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.4022198);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.1906717);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.08625897);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.05303097);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.02857007);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.01245379);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,0.008351401);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(15,0.003651318);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(16,0.002138316);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(17,0.001548397);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(18,0.001464686);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(19,0.001003172);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(20,0.0004374943);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(21,0.0005878005);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(22,0.0003262476);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.0320193);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.04495298);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.05066134);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.0432111);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.03239406);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.02381019);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.01711624);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.01201538);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.008249511);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.005480542);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.004313898);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.003154545);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.002098832);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,0.001865198);
   VbbHcc_tags_H_pt_stack_2->SetBinError(15,0.001112673);
   VbbHcc_tags_H_pt_stack_2->SetBinError(16,0.0008799291);
   VbbHcc_tags_H_pt_stack_2->SetBinError(17,0.0007885476);
   VbbHcc_tags_H_pt_stack_2->SetBinError(18,0.0007370556);
   VbbHcc_tags_H_pt_stack_2->SetBinError(19,0.0005935664);
   VbbHcc_tags_H_pt_stack_2->SetBinError(20,0.0004374943);
   VbbHcc_tags_H_pt_stack_2->SetBinError(21,0.0004175232);
   VbbHcc_tags_H_pt_stack_2->SetBinError(22,0.0003262476);
   VbbHcc_tags_H_pt_stack_2->SetEntries(74786);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_stack_2->SetFillColor(ci);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_18->Modified();
   H_pt_tags_18->cd();
   H_pt_tags_18->SetSelected(H_pt_tags_18);
}

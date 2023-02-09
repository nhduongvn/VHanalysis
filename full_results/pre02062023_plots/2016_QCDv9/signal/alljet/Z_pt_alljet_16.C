#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_alljet_16()
{
//=========Macro generated from canvas: Z_pt_alljet_16/Z_pt_alljet_16
//=========  (Wed Jan 18 11:40:25 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_alljet_16 = new TCanvas("Z_pt_alljet_16", "Z_pt_alljet_16",0,0,600,600);
   Z_pt_alljet_16->SetHighLightColor(2);
   Z_pt_alljet_16->Range(37.97653,-75.91904,1705.96,556.7396);
   Z_pt_alljet_16->SetFillColor(0);
   Z_pt_alljet_16->SetFillStyle(4000);
   Z_pt_alljet_16->SetBorderMode(0);
   Z_pt_alljet_16->SetBorderSize(2);
   Z_pt_alljet_16->SetLeftMargin(0.15709);
   Z_pt_alljet_16->SetRightMargin(0.1234783);
   Z_pt_alljet_16->SetBottomMargin(0.12);
   Z_pt_alljet_16->SetFrameFillStyle(1000);
   Z_pt_alljet_16->SetFrameBorderMode(0);
   Z_pt_alljet_16->SetFrameFillStyle(1000);
   Z_pt_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(493.4737);
   
   TH1F *st_stack_201 = new TH1F("st_stack_201","",40,0,2000);
   st_stack_201->SetMinimum(0);
   st_stack_201->SetMaximum(493.4737);
   st_stack_201->SetDirectory(0);
   st_stack_201->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_201->SetLineColor(ci);
   st_stack_201->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_201->GetXaxis()->SetRange(7,30);
   st_stack_201->GetXaxis()->SetLabelFont(42);
   st_stack_201->GetXaxis()->SetTitleOffset(1);
   st_stack_201->GetXaxis()->SetTitleFont(42);
   st_stack_201->GetYaxis()->SetTitle("Events/50.0");
   st_stack_201->GetYaxis()->SetLabelFont(42);
   st_stack_201->GetYaxis()->SetTitleSize(0.037);
   st_stack_201->GetYaxis()->SetTitleFont(42);
   st_stack_201->GetZaxis()->SetLabelFont(42);
   st_stack_201->GetZaxis()->SetTitleOffset(1);
   st_stack_201->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_201);
   
   
   TH1D *VbbHcc_alljet_Z_pt_stack_1 = new TH1D("VbbHcc_alljet_Z_pt_stack_1","",40,0,2000);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(1,328.9825);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(2,225.9845);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(3,33.05865);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(4,7.442652);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(5,2.397035);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(6,0.856692);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(7,0.3115452);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(8,0.1618382);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(9,0.05374954);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(10,0.03176706);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(11,0.01694541);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(12,0.007385003);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(13,0.005040873);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(14,0.007629228);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(15,0.001597611);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(16,0.004605487);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(17,0.004797184);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(19,0.001514127);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(1,0.7322865);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(2,0.5999574);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(3,0.2249807);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(4,0.1058233);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(5,0.060119);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(6,0.03582433);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(7,0.02152014);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(8,0.01556292);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(9,0.008894718);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(10,0.006954903);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(11,0.004952893);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(12,0.003327652);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(13,0.002862214);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(14,0.003412007);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(15,0.001597611);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(16,0.002659478);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(17,0.002773428);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(19,0.001514127);
   VbbHcc_alljet_Z_pt_stack_1->SetEntries(451639);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_pt_stack_2 = new TH1D("VbbHcc_alljet_Z_pt_stack_2","",40,0,2000);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(1,30.39781);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(2,34.35604);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(3,13.07961);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(4,4.716996);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(5,1.878687);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(6,0.811256);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(7,0.3884704);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(8,0.1943625);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(9,0.09302352);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(10,0.04869714);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(11,0.02841692);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(12,0.01505088);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(13,0.007650404);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(14,0.004278668);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(15,0.001792699);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(16,0.001202755);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(17,0.001962355);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(18,0.0007149158);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(19,0.0003713904);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(20,0.000505842);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(21,5.57783e-05);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(22,0.0005795534);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(23,0.0001894086);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(24,0.0004031255);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(25,0.000215911);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(26,0.0001480239);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(1,0.07602817);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(2,0.08074481);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(3,0.04963675);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(4,0.02973868);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(5,0.01874838);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(6,0.01229476);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(7,0.008555436);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(8,0.006043302);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(9,0.004175115);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(10,0.003014568);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(11,0.00232868);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(12,0.001688865);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(13,0.001195547);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(14,0.0008966388);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(15,0.0005980943);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(16,0.000463805);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(17,0.0006213345);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(18,0.0003622388);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(19,0.0002629649);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(20,0.0003074755);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(21,5.57783e-05);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(22,0.0003272121);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(23,0.0001894086);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(24,0.0002858181);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(25,0.000215911);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(26,0.0001480239);
   VbbHcc_alljet_Z_pt_stack_2->SetEntries(488414);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_alljet_16->Modified();
   Z_pt_alljet_16->cd();
   Z_pt_alljet_16->SetSelected(Z_pt_alljet_16);
}

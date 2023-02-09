void H_pt_both_18_logY()
{
//=========Macro generated from canvas: H_pt_both_18/H_pt_both_18
//=========  (Thu Feb  9 09:44:34 2023) by ROOT version 6.14/09
   TCanvas *H_pt_both_18 = new TCanvas("H_pt_both_18", "H_pt_both_18",0,0,600,600);
   H_pt_both_18->SetHighLightColor(2);
   H_pt_both_18->Range(37.97653,0.3174679,1705.96,3.480948);
   H_pt_both_18->SetFillColor(0);
   H_pt_both_18->SetFillStyle(4000);
   H_pt_both_18->SetBorderMode(0);
   H_pt_both_18->SetBorderSize(2);
   H_pt_both_18->SetLogy();
   H_pt_both_18->SetLeftMargin(0.15709);
   H_pt_both_18->SetRightMargin(0.1234783);
   H_pt_both_18->SetBottomMargin(0.12);
   H_pt_both_18->SetFrameFillStyle(1000);
   H_pt_both_18->SetFrameBorderMode(0);
   H_pt_both_18->SetFrameFillStyle(1000);
   H_pt_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1040.865);
   
   TH1F *st_stack_143 = new TH1F("st_stack_143","",40,0,2000);
   st_stack_143->SetMinimum(4.978351);
   st_stack_143->SetMaximum(1460.832);
   st_stack_143->SetDirectory(0);
   st_stack_143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_143->SetLineColor(ci);
   st_stack_143->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_143->GetXaxis()->SetRange(7,30);
   st_stack_143->GetXaxis()->SetLabelFont(42);
   st_stack_143->GetXaxis()->SetLabelSize(0.035);
   st_stack_143->GetXaxis()->SetTitleSize(0.035);
   st_stack_143->GetXaxis()->SetTitleFont(42);
   st_stack_143->GetYaxis()->SetTitle("Events/50.0");
   st_stack_143->GetYaxis()->SetLabelFont(42);
   st_stack_143->GetYaxis()->SetLabelSize(0.035);
   st_stack_143->GetYaxis()->SetTitleSize(0.037);
   st_stack_143->GetYaxis()->SetTitleOffset(0);
   st_stack_143->GetYaxis()->SetTitleFont(42);
   st_stack_143->GetZaxis()->SetLabelFont(42);
   st_stack_143->GetZaxis()->SetLabelSize(0.035);
   st_stack_143->GetZaxis()->SetTitleSize(0.035);
   st_stack_143->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_143);
   
   
   TH1D *VbbHcc_both_H_pt_stack_1 = new TH1D("VbbHcc_both_H_pt_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_stack_1->SetBinContent(1,4.644639);
   VbbHcc_both_H_pt_stack_1->SetBinContent(2,8.485651);
   VbbHcc_both_H_pt_stack_1->SetBinContent(3,5.276941);
   VbbHcc_both_H_pt_stack_1->SetBinContent(4,2.616861);
   VbbHcc_both_H_pt_stack_1->SetBinContent(5,1.475178);
   VbbHcc_both_H_pt_stack_1->SetBinContent(6,0.8439885);
   VbbHcc_both_H_pt_stack_1->SetBinContent(7,0.4484893);
   VbbHcc_both_H_pt_stack_1->SetBinContent(8,0.2623131);
   VbbHcc_both_H_pt_stack_1->SetBinContent(9,0.1102901);
   VbbHcc_both_H_pt_stack_1->SetBinContent(10,0.05541909);
   VbbHcc_both_H_pt_stack_1->SetBinContent(11,0.03301673);
   VbbHcc_both_H_pt_stack_1->SetBinContent(12,0.02565827);
   VbbHcc_both_H_pt_stack_1->SetBinContent(13,0.0107084);
   VbbHcc_both_H_pt_stack_1->SetBinContent(14,0.008730283);
   VbbHcc_both_H_pt_stack_1->SetBinContent(15,0.002434505);
   VbbHcc_both_H_pt_stack_1->SetBinContent(16,0.008900683);
   VbbHcc_both_H_pt_stack_1->SetBinError(1,0.115034);
   VbbHcc_both_H_pt_stack_1->SetBinError(2,0.1583219);
   VbbHcc_both_H_pt_stack_1->SetBinError(3,0.1213476);
   VbbHcc_both_H_pt_stack_1->SetBinError(4,0.08580505);
   VbbHcc_both_H_pt_stack_1->SetBinError(5,0.0791844);
   VbbHcc_both_H_pt_stack_1->SetBinError(6,0.05235884);
   VbbHcc_both_H_pt_stack_1->SetBinError(7,0.03465721);
   VbbHcc_both_H_pt_stack_1->SetBinError(8,0.02646163);
   VbbHcc_both_H_pt_stack_1->SetBinError(9,0.01745744);
   VbbHcc_both_H_pt_stack_1->SetBinError(10,0.01225251);
   VbbHcc_both_H_pt_stack_1->SetBinError(11,0.009187482);
   VbbHcc_both_H_pt_stack_1->SetBinError(12,0.008129024);
   VbbHcc_both_H_pt_stack_1->SetBinError(13,0.005403356);
   VbbHcc_both_H_pt_stack_1->SetBinError(14,0.005070384);
   VbbHcc_both_H_pt_stack_1->SetBinError(15,0.002434505);
   VbbHcc_both_H_pt_stack_1->SetBinError(16,0.006825481);
   VbbHcc_both_H_pt_stack_1->SetEntries(9737);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_stack_2 = new TH1D("VbbHcc_both_H_pt_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_stack_2->SetBinContent(1,0.8317305);
   VbbHcc_both_H_pt_stack_2->SetBinContent(2,1.922998);
   VbbHcc_both_H_pt_stack_2->SetBinContent(3,2.017001);
   VbbHcc_both_H_pt_stack_2->SetBinContent(4,1.388046);
   VbbHcc_both_H_pt_stack_2->SetBinContent(5,0.7222709);
   VbbHcc_both_H_pt_stack_2->SetBinContent(6,0.3833248);
   VbbHcc_both_H_pt_stack_2->SetBinContent(7,0.1790064);
   VbbHcc_both_H_pt_stack_2->SetBinContent(8,0.1040616);
   VbbHcc_both_H_pt_stack_2->SetBinContent(9,0.04409955);
   VbbHcc_both_H_pt_stack_2->SetBinContent(10,0.0199137);
   VbbHcc_both_H_pt_stack_2->SetBinContent(11,0.007809064);
   VbbHcc_both_H_pt_stack_2->SetBinContent(12,0.007933828);
   VbbHcc_both_H_pt_stack_2->SetBinContent(13,0.002120918);
   VbbHcc_both_H_pt_stack_2->SetBinContent(14,0.001964261);
   VbbHcc_both_H_pt_stack_2->SetBinContent(16,0.0002658739);
   VbbHcc_both_H_pt_stack_2->SetBinContent(17,0.0003895316);
   VbbHcc_both_H_pt_stack_2->SetBinContent(20,0.0004374943);
   VbbHcc_both_H_pt_stack_2->SetBinError(1,0.01849043);
   VbbHcc_both_H_pt_stack_2->SetBinError(2,0.0296461);
   VbbHcc_both_H_pt_stack_2->SetBinError(3,0.03020627);
   VbbHcc_both_H_pt_stack_2->SetBinError(4,0.0235343);
   VbbHcc_both_H_pt_stack_2->SetBinError(5,0.01654652);
   VbbHcc_both_H_pt_stack_2->SetBinError(6,0.01201891);
   VbbHcc_both_H_pt_stack_2->SetBinError(7,0.008519167);
   VbbHcc_both_H_pt_stack_2->SetBinError(8,0.006099507);
   VbbHcc_both_H_pt_stack_2->SetBinError(9,0.003983752);
   VbbHcc_both_H_pt_stack_2->SetBinError(10,0.002670012);
   VbbHcc_both_H_pt_stack_2->SetBinError(11,0.001583056);
   VbbHcc_both_H_pt_stack_2->SetBinError(12,0.001641049);
   VbbHcc_both_H_pt_stack_2->SetBinError(13,0.0008732208);
   VbbHcc_both_H_pt_stack_2->SetBinError(14,0.0008313219);
   VbbHcc_both_H_pt_stack_2->SetBinError(16,0.0002658739);
   VbbHcc_both_H_pt_stack_2->SetBinError(17,0.0003895316);
   VbbHcc_both_H_pt_stack_2->SetBinError(20,0.0004374943);
   VbbHcc_both_H_pt_stack_2->SetEntries(22486);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_both_18->Modified();
   H_pt_both_18->cd();
   H_pt_both_18->SetSelected(H_pt_both_18);
}

void H_pt_alljet_17_logY()
{
//=========Macro generated from canvas: H_pt_alljet_17/H_pt_alljet_17
//=========  (Thu Feb  9 09:44:36 2023) by ROOT version 6.14/09
   TCanvas *H_pt_alljet_17 = new TCanvas("H_pt_alljet_17", "H_pt_alljet_17",0,0,600,600);
   H_pt_alljet_17->SetHighLightColor(2);
   H_pt_alljet_17->Range(37.97653,-0.1095475,1705.96,5.401326);
   H_pt_alljet_17->SetFillColor(0);
   H_pt_alljet_17->SetFillStyle(4000);
   H_pt_alljet_17->SetBorderMode(0);
   H_pt_alljet_17->SetBorderSize(2);
   H_pt_alljet_17->SetLogy();
   H_pt_alljet_17->SetLeftMargin(0.15709);
   H_pt_alljet_17->SetRightMargin(0.1234783);
   H_pt_alljet_17->SetBottomMargin(0.12);
   H_pt_alljet_17->SetFrameFillStyle(1000);
   H_pt_alljet_17->SetFrameBorderMode(0);
   H_pt_alljet_17->SetFrameFillStyle(1000);
   H_pt_alljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(41115.31);
   
   TH1F *st_stack_206 = new TH1F("st_stack_206","",40,0,2000);
   st_stack_206->SetMinimum(3.56252);
   st_stack_206->SetMaximum(70833.48);
   st_stack_206->SetDirectory(0);
   st_stack_206->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_206->SetLineColor(ci);
   st_stack_206->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_206->GetXaxis()->SetRange(7,30);
   st_stack_206->GetXaxis()->SetLabelFont(42);
   st_stack_206->GetXaxis()->SetLabelSize(0.035);
   st_stack_206->GetXaxis()->SetTitleSize(0.035);
   st_stack_206->GetXaxis()->SetTitleFont(42);
   st_stack_206->GetYaxis()->SetTitle("Events/50.0");
   st_stack_206->GetYaxis()->SetLabelFont(42);
   st_stack_206->GetYaxis()->SetLabelSize(0.035);
   st_stack_206->GetYaxis()->SetTitleSize(0.037);
   st_stack_206->GetYaxis()->SetTitleOffset(0);
   st_stack_206->GetYaxis()->SetTitleFont(42);
   st_stack_206->GetZaxis()->SetLabelFont(42);
   st_stack_206->GetZaxis()->SetLabelSize(0.035);
   st_stack_206->GetZaxis()->SetTitleSize(0.035);
   st_stack_206->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_206);
   
   
   TH1D *VbbHcc_alljet_H_pt_stack_1 = new TH1D("VbbHcc_alljet_H_pt_stack_1","",40,0,2000);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(1,375.7769);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(2,314.0336);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(3,73.55646);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(4,16.35553);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(5,5.487071);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(6,2.082235);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(7,0.9158524);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(8,0.3887625);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(9,0.21012);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(10,0.1045692);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(11,0.06960719);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(12,0.02423674);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(13,0.01300062);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(14,0.01998354);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(15,0.007075519);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(17,0.002014015);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(18,0.003765979);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(19,0.001842579);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(25,0.001639841);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(1,0.860144);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(2,0.7787514);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(3,0.3703474);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(4,0.1728745);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(5,0.09994603);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(6,0.06124997);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(7,0.04060616);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(8,0.02619949);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(9,0.01942146);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(10,0.0135685);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(11,0.01105449);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(12,0.006184256);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(13,0.004751417);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(14,0.006351225);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(15,0.003571786);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(17,0.002014015);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(18,0.002663009);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(19,0.001842579);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(25,0.001639841);
   VbbHcc_alljet_H_pt_stack_1->SetEntries(479854);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_stack_1,"");
   
   TH1D *VbbHcc_alljet_H_pt_stack_2 = new TH1D("VbbHcc_alljet_H_pt_stack_2","",40,0,2000);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(1,35.37613);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(2,45.32312);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(3,19.61505);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(4,7.338919);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(5,2.892141);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(6,1.146831);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(7,0.4775668);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(8,0.2090928);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(9,0.09714747);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(10,0.04579411);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(11,0.01967031);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(12,0.01077334);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(13,0.004272673);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(14,0.00224051);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(15,0.001052446);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(16,0.00140571);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(18,0.0002204619);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(20,0.0001733128);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(29,0.0002612132);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(1,0.09238238);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(2,0.1044164);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(3,0.06850589);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(4,0.04178754);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(5,0.02614844);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(6,0.01639837);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(7,0.01056242);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(8,0.006995568);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(9,0.004745107);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(10,0.003277617);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(11,0.002139199);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(12,0.001586364);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(13,0.001022862);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(14,0.0007006645);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(15,0.0004992812);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(16,0.0005798787);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(18,0.0002204619);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(20,0.0001733128);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(29,0.0002612132);
   VbbHcc_alljet_H_pt_stack_2->SetEntries(490312);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_H_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_alljet_17->Modified();
   H_pt_alljet_17->cd();
   H_pt_alljet_17->SetSelected(H_pt_alljet_17);
}

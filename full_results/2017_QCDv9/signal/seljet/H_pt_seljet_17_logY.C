#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_seljet_17_logY()
{
//=========Macro generated from canvas: H_pt_seljet_17/H_pt_seljet_17
//=========  (Wed Jan 18 11:42:17 2023) by ROOT version 6.26/06
   TCanvas *H_pt_seljet_17 = new TCanvas("H_pt_seljet_17", "H_pt_seljet_17",0,0,600,600);
   H_pt_seljet_17->SetHighLightColor(2);
   H_pt_seljet_17->Range(37.97653,0.0438288,1705.96,4.684545);
   H_pt_seljet_17->SetFillColor(0);
   H_pt_seljet_17->SetFillStyle(4000);
   H_pt_seljet_17->SetBorderMode(0);
   H_pt_seljet_17->SetBorderSize(2);
   H_pt_seljet_17->SetLogy();
   H_pt_seljet_17->SetLeftMargin(0.15709);
   H_pt_seljet_17->SetRightMargin(0.1234783);
   H_pt_seljet_17->SetBottomMargin(0.12);
   H_pt_seljet_17->SetFrameFillStyle(1000);
   H_pt_seljet_17->SetFrameBorderMode(0);
   H_pt_seljet_17->SetFrameFillStyle(1000);
   H_pt_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(10363.63);
   
   TH1F *st_stack_270 = new TH1F("st_stack_270","",40,0,2000);
   st_stack_270->SetMinimum(3.987629);
   st_stack_270->SetMaximum(16613.96);
   st_stack_270->SetDirectory(0);
   st_stack_270->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_270->SetLineColor(ci);
   st_stack_270->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_270->GetXaxis()->SetRange(7,30);
   st_stack_270->GetXaxis()->SetLabelFont(42);
   st_stack_270->GetXaxis()->SetTitleOffset(1);
   st_stack_270->GetXaxis()->SetTitleFont(42);
   st_stack_270->GetYaxis()->SetTitle("Events/50.0");
   st_stack_270->GetYaxis()->SetLabelFont(42);
   st_stack_270->GetYaxis()->SetTitleSize(0.037);
   st_stack_270->GetYaxis()->SetTitleFont(42);
   st_stack_270->GetZaxis()->SetLabelFont(42);
   st_stack_270->GetZaxis()->SetTitleOffset(1);
   st_stack_270->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_270);
   
   
   TH1D *VbbHcc_seljet_H_pt_stack_1 = new TH1D("VbbHcc_seljet_H_pt_stack_1","",40,0,2000);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(1,88.99976);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(2,103.6363);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(3,41.24272);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(4,11.57075);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(5,4.347016);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(6,1.862291);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(7,0.7578723);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(8,0.3868191);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(9,0.1843165);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(10,0.1015535);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(11,0.05058262);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(12,0.0416693);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(13,0.01163136);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(14,0.006827629);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(15,0.001182279);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(16,0.003090714);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(17,0.001259297);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(20,0.001760937);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(1,0.4035475);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(2,0.4341293);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(3,0.2706186);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(4,0.1419292);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(5,0.08665546);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(6,0.05640099);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(7,0.03555566);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(8,0.02563354);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(9,0.01756555);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(10,0.01316864);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(11,0.009066543);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(12,0.008758841);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(13,0.004399294);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(14,0.003160077);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(15,0.001182279);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(16,0.002223061);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(17,0.001259297);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(20,0.001760937);
   VbbHcc_seljet_H_pt_stack_1->SetEntries(167881);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_pt_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_pt_stack_2 = new TH1D("VbbHcc_seljet_H_pt_stack_2","",40,0,2000);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(1,16.78836);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(2,24.00044);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(3,13.25887);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(4,5.801665);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(5,2.491009);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(6,1.025518);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(7,0.4245914);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(8,0.2017558);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(9,0.08410838);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(10,0.04115652);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(11,0.01883525);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(12,0.008486878);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(13,0.003681338);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(14,0.002807433);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(15,0.0005861838);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(16,0.0005958683);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(17,0.0005683884);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(19,0.0003895865);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(21,0.0001843075);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(1,0.06429237);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(2,0.07672626);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(3,0.0568195);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(4,0.03737261);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(5,0.02432976);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(6,0.01551731);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(7,0.009974571);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(8,0.00686637);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(9,0.004407876);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(10,0.003124104);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(11,0.002077907);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(12,0.001378367);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(13,0.0009262151);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(14,0.0008313211);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(15,0.000341971);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(16,0.0004250593);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(17,0.0003300831);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(19,0.0002758781);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(21,0.0001843075);
   VbbHcc_seljet_H_pt_stack_2->SetEntries(299433);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_pt_stack_1","ZHcc","F");

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
   H_pt_seljet_17->Modified();
   H_pt_seljet_17->cd();
   H_pt_seljet_17->SetSelected(H_pt_seljet_17);
}

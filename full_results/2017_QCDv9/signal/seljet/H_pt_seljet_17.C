#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_seljet_17()
{
//=========Macro generated from canvas: H_pt_seljet_17/H_pt_seljet_17
//=========  (Tue Feb 14 15:57:12 2023) by ROOT version 6.26/06
   TCanvas *H_pt_seljet_17 = new TCanvas("H_pt_seljet_17", "H_pt_seljet_17",0,0,600,600);
   H_pt_seljet_17->SetHighLightColor(2);
   H_pt_seljet_17->Range(37.97653,-25.80761,1705.96,189.2558);
   H_pt_seljet_17->SetFillColor(0);
   H_pt_seljet_17->SetFillStyle(4000);
   H_pt_seljet_17->SetBorderMode(0);
   H_pt_seljet_17->SetBorderSize(2);
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
   st->SetMaximum(167.7495);
   
   TH1F *st_stack_270 = new TH1F("st_stack_270","",40,0,2000);
   st_stack_270->SetMinimum(0);
   st_stack_270->SetMaximum(167.7495);
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
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(1,93.03642);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(2,111.833);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(3,45.94428);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(4,13.5911);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(5,5.068055);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(6,2.025634);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(7,0.9095972);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(8,0.3933884);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(9,0.2177894);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(10,0.1107639);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(11,0.07203952);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(12,0.02455644);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(13,0.0137526);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(14,0.0219268);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(15,0.005711838);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(17,0.002014015);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(18,0.003765979);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(19,0.001842579);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(22,0.00119605);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(25,0.001639841);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(1,0.4214992);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(2,0.4607681);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(3,0.2924325);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(4,0.157745);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(5,0.0957037);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(6,0.060171);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(7,0.04034475);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(8,0.02620168);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(9,0.01939859);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(10,0.01381178);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(11,0.01120057);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(12,0.006192514);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(13,0.004810556);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(14,0.00664186);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(15,0.003301216);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(17,0.002014015);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(18,0.002663009);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(19,0.001842579);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(22,0.00119605);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(25,0.001639841);
   VbbHcc_seljet_H_pt_stack_1->SetEntries(158880);

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
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(1,18.54694);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(2,26.7608);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(3,14.9744);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(4,6.63684);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(5,2.85607);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(6,1.184566);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(7,0.5104932);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(8,0.2258715);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(9,0.09975675);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(10,0.04755332);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(11,0.01928904);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(12,0.01062395);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(13,0.004190144);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(14,0.002403418);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(15,0.001136235);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(16,0.00140571);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(18,0.0002204619);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(20,0.0001733128);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(29,0.0002612132);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(1,0.06710685);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(2,0.0804773);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(3,0.06002978);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(4,0.03979021);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(5,0.02594241);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(6,0.01657929);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(7,0.01081821);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(8,0.007178459);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(9,0.004775594);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(10,0.00331922);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(11,0.002101644);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(12,0.001573807);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(13,0.00101903);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(14,0.0007106342);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(15,0.0005062631);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(16,0.0005798787);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(18,0.0002204619);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(20,0.0001733128);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(29,0.0002612132);
   VbbHcc_seljet_H_pt_stack_2->SetEntries(311458);

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

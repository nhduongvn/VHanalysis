#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_16_logY()
{
//=========Macro generated from canvas: H_dR_seljet_16/H_dR_seljet_16
//=========  (Thu Feb 16 10:37:22 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_16 = new TCanvas("H_dR_seljet_16", "H_dR_seljet_16",0,0,600,600);
   H_dR_seljet_16->SetHighLightColor(2);
   H_dR_seljet_16->Range(-1.353788,0.2090491,7.264125,3.945528);
   H_dR_seljet_16->SetFillColor(0);
   H_dR_seljet_16->SetFillStyle(4000);
   H_dR_seljet_16->SetBorderMode(0);
   H_dR_seljet_16->SetBorderSize(2);
   H_dR_seljet_16->SetLogy();
   H_dR_seljet_16->SetLeftMargin(0.15709);
   H_dR_seljet_16->SetRightMargin(0.1234783);
   H_dR_seljet_16->SetBottomMargin(0.12);
   H_dR_seljet_16->SetFrameFillStyle(1000);
   H_dR_seljet_16->SetFrameBorderMode(0);
   H_dR_seljet_16->SetFrameFillStyle(1000);
   H_dR_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2520.741);
   
   TH1F *st_stack_277 = new TH1F("st_stack_277","",30,0,6);
   st_stack_277->SetMinimum(4.543876);
   st_stack_277->SetMaximum(3731.468);
   st_stack_277->SetDirectory(0);
   st_stack_277->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_277->SetLineColor(ci);
   st_stack_277->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_277->GetXaxis()->SetRange(1,31);
   st_stack_277->GetXaxis()->SetLabelFont(42);
   st_stack_277->GetXaxis()->SetTitleOffset(1);
   st_stack_277->GetXaxis()->SetTitleFont(42);
   st_stack_277->GetYaxis()->SetTitle("Events/0.2");
   st_stack_277->GetYaxis()->SetLabelFont(42);
   st_stack_277->GetYaxis()->SetTitleSize(0.037);
   st_stack_277->GetYaxis()->SetTitleFont(42);
   st_stack_277->GetZaxis()->SetLabelFont(42);
   st_stack_277->GetZaxis()->SetTitleOffset(1);
   st_stack_277->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_277);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,0.4467474);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,0.9760339);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,1.371587);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,1.488395);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,1.780261);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,2.058598);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,2.380479);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,3.126926);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,4.048754);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,5.679179);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,8.223754);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,12.00727);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,16.14712);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,18.65378);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,6.699142);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,2.870824);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,1.520688);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,0.782754);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,0.5605805);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,0.3319425);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,0.2153728);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,0.1208305);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,0.05827589);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,0.01871492);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,0.008214341);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,0.03579408);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,0.05363073);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,0.06368602);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,0.0665354);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,0.07315856);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,0.07886284);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,0.0846006);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,0.09646265);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,0.1097037);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,0.130753);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,0.1575131);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,0.1895324);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,0.22056);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,0.2380426);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,0.1412811);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,0.09211607);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,0.06666675);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,0.04772535);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,0.03996897);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,0.03063686);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,0.02467759);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,0.01843947);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,0.01263688);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,0.007131377);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,0.004742671);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(32424);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,0.1934227);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,0.4772837);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,0.6456487);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,0.6215221);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,0.5837496);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,0.5785299);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,0.6141864);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,0.8426819);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,1.383291);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,2.211989);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,3.392933);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,4.691451);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,6.148061);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,6.553638);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,2.823172);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,1.429083);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,0.8114529);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,0.4970476);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,0.3151532);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,0.1818609);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,0.1153692);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,0.05615512);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,0.0301874);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,0.01530359);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,0.005783567);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,0.002613497);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,0.008459693);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,0.01333453);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,0.015638);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,0.01538311);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,0.01492844);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,0.01485982);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,0.0152654);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,0.01789791);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,0.0230165);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,0.02911199);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,0.0360738);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,0.04244693);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,0.04861261);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,0.05015119);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,0.03287472);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,0.0233317);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,0.01756118);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,0.01371988);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,0.01087854);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,0.008258586);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,0.006520001);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,0.004540366);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,0.00330745);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,0.002304813);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,0.001409194);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,0.0009306466);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(93749);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","ZHcc","F");

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
   H_dR_seljet_16->Modified();
   H_dR_seljet_16->cd();
   H_dR_seljet_16->SetSelected(H_dR_seljet_16);
}

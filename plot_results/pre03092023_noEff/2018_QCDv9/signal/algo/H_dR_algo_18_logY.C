#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_18 = new TCanvas("H_dR_algo_18", "H_dR_algo_18",0,0,600,600);
   H_dR_algo_18->SetHighLightColor(2);
   H_dR_algo_18->Range(-1.310117,-0.06556676,7.029799,0.4808229);
   H_dR_algo_18->SetFillColor(0);
   H_dR_algo_18->SetFillStyle(4000);
   H_dR_algo_18->SetBorderMode(0);
   H_dR_algo_18->SetBorderSize(2);
   H_dR_algo_18->SetLogy();
   H_dR_algo_18->SetLeftMargin(0.15709);
   H_dR_algo_18->SetRightMargin(0.1234783);
   H_dR_algo_18->SetBottomMargin(0.12);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_87 = new TH1F("st_stack_87","",30,0,6);
   st_stack_87->SetMinimum(-2.383338e+09);
   st_stack_87->SetMaximum(-0.4376781);
   st_stack_87->SetDirectory(0);
   st_stack_87->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_87->SetLineColor(ci);
   st_stack_87->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_87->GetXaxis()->SetRange(1,31);
   st_stack_87->GetXaxis()->SetLabelFont(42);
   st_stack_87->GetXaxis()->SetTitleOffset(1);
   st_stack_87->GetXaxis()->SetTitleFont(42);
   st_stack_87->GetYaxis()->SetTitle("Event/0.2");
   st_stack_87->GetYaxis()->SetLabelFont(42);
   st_stack_87->GetYaxis()->SetTitleSize(0.037);
   st_stack_87->GetYaxis()->SetTitleFont(42);
   st_stack_87->GetZaxis()->SetLabelFont(42);
   st_stack_87->GetZaxis()->SetTitleOffset(1);
   st_stack_87->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_87);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.05329345);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.140798);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.1828036);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.3053675);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.2468219);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.1767907);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.168061);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.1027513);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.06190718);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.04302713);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.05166947);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.03719887);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.02207478);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.03270759);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.01636387);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.01194329);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.002112291);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.01012953);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.01739892);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.01981344);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.03807818);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.02250772);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.01913668);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.01849311);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.01455547);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.01129723);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.009312099);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.0100984);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.009140213);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.006388697);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.008250811);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.005480142);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.00494312);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.002112291);
   VbbHcc_algo_H_dR_stack_1->SetEntries(907);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.01027104);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.03220754);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.05842859);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.1005219);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.1086234);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.08468822);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.05677959);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.02995513);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.01648733);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.0170708);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.01308692);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.008561663);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.01124104);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.008742673);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.005783685);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.003632928);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.001997165);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.002214964);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,0.0005601344);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0002346898);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.001629731);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.002933355);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.003889674);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.005613777);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.006172787);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.004703434);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.003923988);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.002837631);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.002054863);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.002109042);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.001866808);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.001496981);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.001680503);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.001490462);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.001209528);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.001045895);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.0007328847);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.0007914933);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,0.0003986768);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0002346898);
   VbbHcc_algo_H_dR_stack_2->SetEntries(2258);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","ZHcc","F");

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
   H_dR_algo_18->Modified();
   H_dR_algo_18->cd();
   H_dR_algo_18->SetSelected(H_dR_algo_18);
}

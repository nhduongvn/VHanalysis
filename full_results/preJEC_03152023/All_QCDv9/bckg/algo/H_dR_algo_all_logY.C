#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(-1.353788,-0.3583778,7.264125,6.620106);
   H_dR_algo_all->SetFillColor(0);
   H_dR_algo_all->SetFillStyle(4000);
   H_dR_algo_all->SetBorderMode(0);
   H_dR_algo_all->SetBorderSize(2);
   H_dR_algo_all->SetLogy();
   H_dR_algo_all->SetLeftMargin(0.15709);
   H_dR_algo_all->SetRightMargin(0.1234783);
   H_dR_algo_all->SetBottomMargin(0.12);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(433784);
   
   TH1F *st_stack_88 = new TH1F("st_stack_88","",30,0,6);
   st_stack_88->SetMinimum(3.013286);
   st_stack_88->SetMaximum(836098.9);
   st_stack_88->SetDirectory(0);
   st_stack_88->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_88->SetLineColor(ci);
   st_stack_88->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_88->GetXaxis()->SetRange(1,31);
   st_stack_88->GetXaxis()->SetLabelFont(42);
   st_stack_88->GetXaxis()->SetTitleOffset(1);
   st_stack_88->GetXaxis()->SetTitleFont(42);
   st_stack_88->GetYaxis()->SetTitle("Event/0.2");
   st_stack_88->GetYaxis()->SetLabelFont(42);
   st_stack_88->GetYaxis()->SetTitleSize(0.037);
   st_stack_88->GetYaxis()->SetTitleFont(42);
   st_stack_88->GetZaxis()->SetLabelFont(42);
   st_stack_88->GetZaxis()->SetTitleOffset(1);
   st_stack_88->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_88);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,207164.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,224411.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,176536.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,188845.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,191735.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,197019.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,276032.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,258296.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,244339.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,269636.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,240280.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,344268.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,283374.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,245138.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,138842.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,122693.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,59537.91);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,34033.22);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,18527.27);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(22,10138.99);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(23,7663.255);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(24,1487.06);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(25,306.7999);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(26,430.3701);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(27,94.56136);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(28,12.19098);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,11178.21);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,12567.86);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,11443.01);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,11557.64);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,12396.33);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,16231.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,40085.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,39143.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,21852.33);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,30543.61);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,12833.08);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,51183.97);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,27971.91);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,23629.29);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,8819.668);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,19004.14);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,6033.385);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,4527.514);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,3175.327);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(22,2563.019);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(23,2574.662);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(24,541.7957);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(25,80.7527);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(26,296.4463);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(27,43.13321);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(28,7.242551);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(72705);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(2,2.339417);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,4718.695);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,9299.668);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,11434.96);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,12929.37);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,13498.29);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,13637.81);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,14012.51);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,14511.68);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,15251.38);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,15969.31);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,16249.66);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,15772.28);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,14970.88);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,13594.85);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,8176.356);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,4995.896);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,3049.132);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,1776.449);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,999.5173);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,510.2784);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(23,267.1273);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(24,119.1319);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(25,44.22883);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(26,13.93026);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(27,4.143222);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(28,0.5367964);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(29,0.04811475);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(2,0.4209521);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,18.90956);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,26.15296);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,28.9573);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,30.93343);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,31.80483);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,32.21091);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,32.59548);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,33.45331);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,34.05484);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,34.73095);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,34.90763);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,34.62069);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,33.25241);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,31.51659);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,24.69193);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,19.30612);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,15.55602);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,11.1633);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,8.595069);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,5.880015);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(23,4.264922);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(24,2.959216);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(25,1.827034);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(26,0.9499897);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(27,0.5209478);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(28,0.175171);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(29,0.04811475);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(3202080);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}

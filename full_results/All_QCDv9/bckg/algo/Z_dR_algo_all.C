#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_all()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Thu Mar  9 13:18:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_all = new TCanvas("Z_dR_algo_all", "Z_dR_algo_all",0,0,600,600);
   Z_dR_algo_all->SetHighLightColor(2);
   Z_dR_algo_all->Range(-1.310117,-87287.5,7.029799,640108.3);
   Z_dR_algo_all->SetFillColor(0);
   Z_dR_algo_all->SetFillStyle(4000);
   Z_dR_algo_all->SetBorderMode(0);
   Z_dR_algo_all->SetBorderSize(2);
   Z_dR_algo_all->SetLeftMargin(0.15709);
   Z_dR_algo_all->SetRightMargin(0.1234783);
   Z_dR_algo_all->SetBottomMargin(0.12);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(567368.8);
   
   TH1F *st_stack_84 = new TH1F("st_stack_84","",30,0,6);
   st_stack_84->SetMinimum(0);
   st_stack_84->SetMaximum(567368.8);
   st_stack_84->SetDirectory(0);
   st_stack_84->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_84->SetLineColor(ci);
   st_stack_84->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_84->GetXaxis()->SetRange(1,30);
   st_stack_84->GetXaxis()->SetLabelFont(42);
   st_stack_84->GetXaxis()->SetTitleOffset(1);
   st_stack_84->GetXaxis()->SetTitleFont(42);
   st_stack_84->GetYaxis()->SetTitle("Event/0.2");
   st_stack_84->GetYaxis()->SetLabelFont(42);
   st_stack_84->GetYaxis()->SetTitleSize(0.037);
   st_stack_84->GetYaxis()->SetTitleFont(42);
   st_stack_84->GetZaxis()->SetLabelFont(42);
   st_stack_84->GetZaxis()->SetTitleOffset(1);
   st_stack_84->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_84);
   
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(2,739.1624);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,466081.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,456943.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,351495.2);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,338056.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,294670);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,232604.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,208289.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,259311.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,185158.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,183467.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,145562.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,184053.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,126225.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,109794.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,79544.86);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,38075.95);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,25895.49);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,31704.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(21,13896.16);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(22,5945.58);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(23,1966.353);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(24,1174.753);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(25,153.9473);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(26,12.40547);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(27,23.74615);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(2,485.2302);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,32558.77);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,16819.57);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,26857.84);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,28254.48);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,21976.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,16733.55);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,12327.46);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,42180.99);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,25658.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,37898.33);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,10545.48);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,35700.24);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,10266.73);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,9477.73);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,21820.76);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,5102.13);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,3782.714);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,19716.61);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(21,3804.611);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(22,2405.467);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(23,576.9846);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(24,604.7845);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(25,57.23674);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(26,7.369973);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(27,12.83975);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(72705);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(2,5.425417);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,4834.555);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,10156.03);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,13418.89);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,16276.16);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,18117.61);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,18949.02);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,18858.25);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,17939.4);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,16704.8);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,15124.22);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,13602.81);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,12250.45);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,11149.66);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,9695.808);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,4430.678);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,2180.143);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,1089.863);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,552.7344);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(21,269.3229);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,120.2074);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(23,51.30967);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(24,21.01354);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(25,8.722961);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(26,2.447414);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(27,0.7687773);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(28,0.1356044);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(2,0.6285638);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,19.19495);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,28.03693);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,31.97933);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,35.77468);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,37.07569);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,37.69951);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,37.75248);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,36.49436);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,35.19295);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,33.49157);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,31.48493);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,30.08623);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,29.15149);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,26.2548);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,18.02331);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,12.69308);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,8.640995);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,6.181297);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(21,4.431818);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,2.924501);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(23,1.866525);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(24,1.175282);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(25,0.7766445);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(26,0.3892007);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(27,0.2175318);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(28,0.09835574);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(3202080);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_1","QCD","F");

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
   Z_dR_algo_all->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->SetSelected(Z_dR_algo_all);
}

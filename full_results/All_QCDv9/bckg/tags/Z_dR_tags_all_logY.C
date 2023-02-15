#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_all_logY()
{
//=========Macro generated from canvas: Z_dR_tags_all/Z_dR_tags_all
//=========  (Tue Feb 14 16:02:01 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_all = new TCanvas("Z_dR_tags_all", "Z_dR_tags_all",0,0,600,600);
   Z_dR_tags_all->SetHighLightColor(2);
   Z_dR_tags_all->Range(-1.310117,-2.013964,7.029799,10.85832);
   Z_dR_tags_all->SetFillColor(0);
   Z_dR_tags_all->SetFillStyle(4000);
   Z_dR_tags_all->SetBorderMode(0);
   Z_dR_tags_all->SetBorderSize(2);
   Z_dR_tags_all->SetLogy();
   Z_dR_tags_all->SetLeftMargin(0.15709);
   Z_dR_tags_all->SetRightMargin(0.1234783);
   Z_dR_tags_all->SetBottomMargin(0.12);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.843374);
   st->SetMaximum(1.343427e+09);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",30,0,6);
   st_stack_20->SetMinimum(0.3393982);
   st_stack_20->SetMaximum(3.724679e+09);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_20->GetXaxis()->SetRange(1,30);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(2,5241.086);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,1.085791e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,1.318069e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,9855026);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,8171680);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,7746909);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,7140966);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,6895675);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,6913058);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,6926324);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,7236405);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,7848806);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,8979356);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,1.011885e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,1.030115e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,6204702);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,3815978);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,2959146);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,1998082);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,1291898);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,1052596);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,605187.3);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,323173);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(25,168297.1);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(26,109104.3);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(27,54705.71);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(28,10514.28);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(29,1836.398);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(2,1118.486);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,216214);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,248383.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,231169.8);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,200267.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,215729);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,204736.8);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,211324.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,206781.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,223112.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,209255.2);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,221030.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,251528.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,269277.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,264570.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,202837.5);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,154536.6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,149634.1);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,122988.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,87942.41);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,96352.49);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,60823.99);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,33899.06);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(25,26170.89);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(26,22528.42);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(27,24875.34);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(28,3968.597);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(29,1825.684);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(1446641);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(2,89.13067);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,129159.5);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,253585.8);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,303429.6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,370139);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,432984.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,492795.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,552215.3);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,613148.7);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,678350.8);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,748465.2);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,822173.2);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,894983.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,960751.8);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,941180.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,494800);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,281387.2);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,166518.2);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,97932.52);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,56307.32);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,31453.52);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,16864.4);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,8553.459);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,3954.061);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,1639.211);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(27,556.4024);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(28,130.1244);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(29,6.975441);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(2,2.630312);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,103.4973);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,144.9605);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,158.3631);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,175.3812);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,189.3234);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,202.3484);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,213.9648);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,225.3578);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,237.748);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,249.1542);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,261.5713);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,273.053);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,283.1231);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,280.3703);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,203.8295);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,153.6989);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,118.1682);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,90.74024);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,68.88111);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,51.6943);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,37.85197);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,26.36903);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,17.91821);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,12.0868);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(27,6.730036);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(28,4.085236);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(29,0.7133426);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(1.308968e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_all->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->SetSelected(Z_dR_tags_all);
}

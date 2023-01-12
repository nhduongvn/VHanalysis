#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_all()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Mon Dec 19 11:11:22 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_all = new TCanvas("Z_dR_algo_all", "Z_dR_algo_all",0,0,600,600);
   Z_dR_algo_all->SetHighLightColor(2);
   Z_dR_algo_all->Range(-1.310117,-0.3465014,7.029799,2.54101);
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
   st->SetMaximum(2.252259);
   
   TH1F *st_stack_76 = new TH1F("st_stack_76","",30,0,6);
   st_stack_76->SetMinimum(0);
   st_stack_76->SetMaximum(2.252259);
   st_stack_76->SetDirectory(0);
   st_stack_76->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_76->SetLineColor(ci);
   st_stack_76->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_76->GetXaxis()->SetRange(1,30);
   st_stack_76->GetXaxis()->SetLabelFont(42);
   st_stack_76->GetXaxis()->SetTitleOffset(1);
   st_stack_76->GetXaxis()->SetTitleFont(42);
   st_stack_76->GetYaxis()->SetTitle("Events/0.2");
   st_stack_76->GetYaxis()->SetLabelFont(42);
   st_stack_76->GetYaxis()->SetTitleSize(0.037);
   st_stack_76->GetYaxis()->SetTitleFont(42);
   st_stack_76->GetZaxis()->SetLabelFont(42);
   st_stack_76->GetZaxis()->SetTitleOffset(1);
   st_stack_76->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_76);
   
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,0.3227219);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,0.4061257);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,0.9364719);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,1.096938);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,1.063989);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,0.897505);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,0.6821863);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,0.5689561);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,0.3819014);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,0.2262421);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,0.1651322);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,0.1230826);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,0.126457);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,0.09273622);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,0.03314334);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,0.01854006);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,0.006630474);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,0.00289581);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(21,0.001472708);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(22,0.002278067);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,0.02602984);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,0.02957598);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,0.04571984);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,0.04909903);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,0.04861736);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,0.04414415);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,0.03871031);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,0.03583885);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,0.02822516);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,0.02279393);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,0.0181288);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,0.01552412);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,0.01576894);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,0.01358944);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,0.008465761);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,0.006079953);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,0.004689205);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,0.002050116);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(21,0.001472708);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(22,0.002278067);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(4155);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,0.0553007);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,0.1339917);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,0.3354785);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,0.4045681);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,0.3105894);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,0.2008059);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,0.1190907);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,0.08796465);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,0.05598397);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,0.04276292);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,0.03131794);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,0.02883294);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,0.02339481);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,0.01986512);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,0.009010437);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,0.006386974);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,0.003902589);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,0.001254941);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(21,0.0008576918);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,0.0009750235);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(23,0.0006706309);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,0.003939285);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,0.006346428);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,0.01004329);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,0.01108729);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,0.009554824);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,0.007742636);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,0.005942524);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,0.005106133);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,0.004122221);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,0.003495624);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,0.003024146);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,0.002925596);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,0.002542528);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,0.002381714);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,0.001661961);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,0.001408123);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,0.001107485);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,0.0005604461);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(21,0.00043587);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,0.0006024788);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(23,0.0005171875);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(7690);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_all->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->SetSelected(Z_dR_algo_all);
}

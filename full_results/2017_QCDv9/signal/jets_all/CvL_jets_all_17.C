void CvL_jets_all_17()
{
//=========Macro generated from canvas: CvL_jets_all_17/CvL_jets_all_17
//=========  (Thu Dec 15 10:04:54 2022) by ROOT version 6.14/09
   TCanvas *CvL_jets_all_17 = new TCanvas("CvL_jets_all_17", "CvL_jets_all_17",0,0,600,600);
   CvL_jets_all_17->SetHighLightColor(2);
   CvL_jets_all_17->Range(-0.2183529,-756.171,1.171633,5545.254);
   CvL_jets_all_17->SetFillColor(0);
   CvL_jets_all_17->SetFillStyle(4000);
   CvL_jets_all_17->SetBorderMode(0);
   CvL_jets_all_17->SetBorderSize(2);
   CvL_jets_all_17->SetLeftMargin(0.15709);
   CvL_jets_all_17->SetRightMargin(0.1234783);
   CvL_jets_all_17->SetBottomMargin(0.12);
   CvL_jets_all_17->SetFrameFillStyle(1000);
   CvL_jets_all_17->SetFrameBorderMode(0);
   CvL_jets_all_17->SetFrameFillStyle(1000);
   CvL_jets_all_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4681.059);
   
   TH1F *st_stack_54 = new TH1F("st_stack_54","",20,0,1);
   st_stack_54->SetMinimum(0);
   st_stack_54->SetMaximum(4915.111);
   st_stack_54->SetDirectory(0);
   st_stack_54->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_54->SetLineColor(ci);
   st_stack_54->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_54->GetXaxis()->SetRange(1,20);
   st_stack_54->GetXaxis()->SetLabelFont(42);
   st_stack_54->GetXaxis()->SetLabelSize(0.035);
   st_stack_54->GetXaxis()->SetTitleSize(0.035);
   st_stack_54->GetXaxis()->SetTitleFont(42);
   st_stack_54->GetYaxis()->SetTitle("Events/0.05");
   st_stack_54->GetYaxis()->SetLabelFont(42);
   st_stack_54->GetYaxis()->SetLabelSize(0.035);
   st_stack_54->GetYaxis()->SetTitleSize(0.037);
   st_stack_54->GetYaxis()->SetTitleOffset(0);
   st_stack_54->GetYaxis()->SetTitleFont(42);
   st_stack_54->GetZaxis()->SetLabelFont(42);
   st_stack_54->GetZaxis()->SetLabelSize(0.035);
   st_stack_54->GetZaxis()->SetTitleSize(0.035);
   st_stack_54->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_54);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,636.3252);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,2723.401);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,705.9313);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,246.4832);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,146.4773);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,100.7185);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,78.79625);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,64.12363);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,57.56915);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,50.92482);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,45.83386);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,39.73669);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,39.54502);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,36.19316);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,33.86653);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,31.71189);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,31.79393);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,31.91042);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,32.55559);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,9.676172);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,1.080456);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,2.229044);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.135413);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,0.6714683);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,0.5185652);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,0.4306281);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,0.3812784);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,0.3439685);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,0.3265224);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,0.3065652);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,0.2918266);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,0.2715178);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,0.270844);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,0.2593096);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,0.2507535);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,0.2428029);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,0.2433499);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,0.2440593);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,0.2458198);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,0.1339157);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(3671272);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvL_stack_2 = new TH1D("VbbHcc_jets_all_CvL_stack_2","",20,0,1);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,119.6989);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,397.3051);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,103.7048);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,37.08724);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,22.41983);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,15.8588);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,12.46277);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,10.35781);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,9.362059);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,8.288207);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,7.437547);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,6.720089);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,6.623687);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,6.035661);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,5.851739);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,5.629094);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,5.687137);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,5.855281);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,6.435184);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,2.261889);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,0.1710969);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,0.3088038);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,0.1578396);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,0.09460744);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,0.07369575);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,0.06206741);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,0.05508327);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,0.05027501);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,0.04779074);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,0.04502029);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,0.04259995);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,0.04055308);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,0.04027314);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,0.03844021);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,0.03788073);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,0.03719435);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,0.03746617);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,0.03800797);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,0.03979454);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,0.0236498);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(3862038);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_1","ZHcc","F");

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
   CvL_jets_all_17->Modified();
   CvL_jets_all_17->cd();
   CvL_jets_all_17->SetSelected(CvL_jets_all_17);
}

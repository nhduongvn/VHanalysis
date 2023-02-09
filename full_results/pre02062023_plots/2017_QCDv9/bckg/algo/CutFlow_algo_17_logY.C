#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_algo_17_logY()
{
//=========Macro generated from canvas: CutFlow_algo_17/CutFlow_algo_17
//=========  (Thu Dec 15 14:28:48 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_algo_17 = new TCanvas("CutFlow_algo_17", "CutFlow_algo_17",0,0,600,600);
   CutFlow_algo_17->SetHighLightColor(2);
   CutFlow_algo_17->Range(-1.310117,2.885743,7.029799,15.83607);
   CutFlow_algo_17->SetFillColor(0);
   CutFlow_algo_17->SetFillStyle(4000);
   CutFlow_algo_17->SetBorderMode(0);
   CutFlow_algo_17->SetBorderSize(2);
   CutFlow_algo_17->SetLogy();
   CutFlow_algo_17->SetLeftMargin(0.15709);
   CutFlow_algo_17->SetRightMargin(0.1234783);
   CutFlow_algo_17->SetBottomMargin(0.12);
   CutFlow_algo_17->SetFrameFillStyle(1000);
   CutFlow_algo_17->SetFrameBorderMode(0);
   CutFlow_algo_17->SetFrameFillStyle(1000);
   CutFlow_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(150297.5);
   st->SetMaximum(1.248485e+14);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",5,0,5);
   st_stack_46->SetMinimum(27528.45);
   st_stack_46->SetMaximum(3.475641e+14);
   st_stack_46->SetDirectory(0);
   st_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_46->SetLineColor(ci);
   st_stack_46->GetXaxis()->SetTitle(""Cut flow"");
   st_stack_46->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_46->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_46->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_46->GetXaxis()->SetBinLabel(4,"b-tags");
   st_stack_46->GetXaxis()->SetBinLabel(5,"c-tags");
   st_stack_46->GetXaxis()->SetRange(1,6);
   st_stack_46->GetXaxis()->SetLabelFont(42);
   st_stack_46->GetXaxis()->SetTitleOffset(1);
   st_stack_46->GetXaxis()->SetTitleFont(42);
   st_stack_46->GetYaxis()->SetTitle("Events/1.0");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetTitleSize(0.037);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetTitleOffset(1);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VbbHcc_algo_CutFlow_stack_1 = new TH1D("VbbHcc_algo_CutFlow_stack_1","",5,0,5);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(1,1.248451e+12);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(2,1.248338e+12);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(3,1.920566e+10);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(4,1.488897e+08);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(5,8740897);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(1,1.298661e+08);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(2,1.298609e+08);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(3,1.109046e+07);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(4,945216.4);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(5,241104.2);
   VbbHcc_algo_CutFlow_stack_1->SetEntries(6.812307e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_2 = new TH1D("VbbHcc_algo_CutFlow_stack_2","",5,0,5);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(1,3.453136e+07);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(2,3.275413e+07);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(3,2.025476e+07);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(4,1407826);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(5,132622.1);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(1,1391.556);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(2,1363.004);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(3,1111.19);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(4,286.9921);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(5,88.77276);
   VbbHcc_algo_CutFlow_stack_2->SetEntries(1.67333e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_algo_17->Modified();
   CutFlow_algo_17->cd();
   CutFlow_algo_17->SetSelected(CutFlow_algo_17);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_all_logY()
{
//=========Macro generated from canvas: CvB_jets_all_all/CvB_jets_all_all
//=========  (Mon Dec 19 11:03:35 2022) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_all = new TCanvas("CvB_jets_all_all", "CvB_jets_all_all",0,0,600,600);
   CvB_jets_all_all->SetHighLightColor(2);
   CvB_jets_all_all->Range(-0.2183529,-0.3781247,1.171633,6.719535);
   CvB_jets_all_all->SetFillColor(0);
   CvB_jets_all_all->SetFillStyle(4000);
   CvB_jets_all_all->SetBorderMode(0);
   CvB_jets_all_all->SetBorderSize(2);
   CvB_jets_all_all->SetLogy();
   CvB_jets_all_all->SetLeftMargin(0.15709);
   CvB_jets_all_all->SetRightMargin(0.1234783);
   CvB_jets_all_all->SetBottomMargin(0.12);
   CvB_jets_all_all->SetFrameFillStyle(1000);
   CvB_jets_all_all->SetFrameBorderMode(0);
   CvB_jets_all_all->SetFrameFillStyle(1000);
   CvB_jets_all_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(526049.3);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",20,0,1);
   st_stack_120->SetMinimum(2.975736);
   st_stack_120->SetMaximum(1022748);
   st_stack_120->SetDirectory(0);
   st_stack_120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_120->SetLineColor(ci);
   st_stack_120->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_120->GetXaxis()->SetRange(1,20);
   st_stack_120->GetXaxis()->SetLabelFont(42);
   st_stack_120->GetXaxis()->SetTitleOffset(1);
   st_stack_120->GetXaxis()->SetTitleFont(42);
   st_stack_120->GetYaxis()->SetTitle("Events/0.05");
   st_stack_120->GetYaxis()->SetLabelFont(42);
   st_stack_120->GetYaxis()->SetTitleSize(0.037);
   st_stack_120->GetYaxis()->SetTitleFont(42);
   st_stack_120->GetZaxis()->SetLabelFont(42);
   st_stack_120->GetZaxis()->SetTitleOffset(1);
   st_stack_120->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_120);
   
   
   TH1D *VbbHcc_jets_all_CvB_all_stack_1 = new TH1D("VbbHcc_jets_all_CvB_all_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(0,1522.373);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(1,4421.737);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(2,185.5509);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(3,134.3415);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(4,109.7819);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(5,165.7428);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(6,158.8148);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(7,382.6583);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(8,204.4963);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(9,266.2471);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(10,363.6209);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(11,336.0189);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(12,463.3203);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(13,549.5341);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(14,688.5304);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(15,691.8813);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(16,1072.506);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(17,1282.852);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(18,1180.949);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(19,1671.311);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(20,615.0838);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(21,334.9556);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(0,1.860788);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(1,2.961645);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(2,0.6144592);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(3,0.5416818);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(4,0.4834529);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(5,0.5783982);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(6,0.5890638);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(7,0.9634869);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(8,0.662995);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(9,0.7747373);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(10,0.8601036);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(11,0.8385198);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(12,0.9712907);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(13,1.08902);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(14,1.253905);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(15,1.218066);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(16,1.572388);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(17,1.71801);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(18,1.616535);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(19,1.95799);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(20,1.178062);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(21,0.7488639);
   VbbHcc_jets_all_CvB_all_stack_1->SetEntries(1.036165e+07);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvB_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvB_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_all_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_all_stack_2 = new TH1D("VbbHcc_jets_all_CvB_all_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(0,214.1454);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(1,838.7561);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(2,24.06192);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(3,34.64853);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(4,21.35572);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(5,23.82144);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(6,26.23099);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(7,27.22142);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(8,31.54208);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(9,65.81326);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(10,58.2722);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(11,59.94894);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(12,66.45445);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(13,88.98278);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(14,100.1442);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(15,107.5185);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(16,126.6103);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(17,176.9696);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(18,199.2698);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(19,209.2338);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(20,84.30449);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(21,51.87508);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(0,0.2432374);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(1,0.4869259);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(2,0.08259375);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(3,0.1037495);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(4,0.07811659);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(5,0.08287063);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(6,0.08900197);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(7,0.08641799);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(8,0.09526571);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(9,0.1427673);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(10,0.1268606);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(11,0.1345824);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(12,0.1402123);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(13,0.164241);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(14,0.1724639);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(15,0.1753111);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(16,0.1921683);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(17,0.2265484);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(18,0.2397393);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(19,0.2507628);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(20,0.1599655);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(21,0.1287369);
   VbbHcc_jets_all_CvB_all_stack_2->SetEntries(1.122788e+07);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvB_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvB_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_all_stack_1","ZHcc","F");

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
   CvB_jets_all_all->Modified();
   CvB_jets_all_all->cd();
   CvB_jets_all_all->SetSelected(CvB_jets_all_all);
}

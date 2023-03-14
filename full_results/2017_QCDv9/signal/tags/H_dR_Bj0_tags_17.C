#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_17()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_17/H_dR_Bj0_tags_17
//=========  (Thu Mar  9 13:09:05 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_tags_17 = new TCanvas("H_dR_Bj0_tags_17", "H_dR_Bj0_tags_17",0,0,600,600);
   H_dR_Bj0_tags_17->SetHighLightColor(2);
   H_dR_Bj0_tags_17->Range(-1.310117,-0.2570681,7.029799,1.885166);
   H_dR_Bj0_tags_17->SetFillColor(0);
   H_dR_Bj0_tags_17->SetFillStyle(4000);
   H_dR_Bj0_tags_17->SetBorderMode(0);
   H_dR_Bj0_tags_17->SetBorderSize(2);
   H_dR_Bj0_tags_17->SetLeftMargin(0.15709);
   H_dR_Bj0_tags_17->SetRightMargin(0.1234783);
   H_dR_Bj0_tags_17->SetBottomMargin(0.12);
   H_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_17->SetFrameBorderMode(0);
   H_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.670943);
   
   TH1F *st_stack_42 = new TH1F("st_stack_42","",30,0,6);
   st_stack_42->SetMinimum(0);
   st_stack_42->SetMaximum(1.670943);
   st_stack_42->SetDirectory(0);
   st_stack_42->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_42->SetLineColor(ci);
   st_stack_42->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_42->GetXaxis()->SetRange(1,30);
   st_stack_42->GetXaxis()->SetLabelFont(42);
   st_stack_42->GetXaxis()->SetTitleOffset(1);
   st_stack_42->GetXaxis()->SetTitleFont(42);
   st_stack_42->GetYaxis()->SetTitle("Event/0.2");
   st_stack_42->GetYaxis()->SetLabelFont(42);
   st_stack_42->GetYaxis()->SetTitleSize(0.037);
   st_stack_42->GetYaxis()->SetTitleFont(42);
   st_stack_42->GetZaxis()->SetLabelFont(42);
   st_stack_42->GetZaxis()->SetTitleOffset(1);
   st_stack_42->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_42);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,0.1611856);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,0.7790638);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,0.987657);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,0.7727428);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,0.6273597);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,0.4740753);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,0.327112);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,0.2322969);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,0.1943709);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,0.1406424);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,0.1564449);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,0.1311608);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,0.1011361);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,0.1011361);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,0.09007432);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,0.06637055);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,0.04424703);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,0.03634578);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,0.02844452);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,0.01896301);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,0.004740753);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,0.004740753);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,0.007901256);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,0.01595975);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,0.03508727);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,0.03950628);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,0.03494464);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,0.03148628);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,0.02737075);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,0.02273585);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,0.01915953);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,0.01752583);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,0.01490806);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,0.0157233);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,0.01439677);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,0.01264201);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,0.01264201);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,0.01193063);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,0.0102412);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,0.008361903);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,0.007578618);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,0.006704438);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,0.005474151);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,0.002737075);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,0.002737075);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,0.003533549);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,0.0512786);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,0.3130693);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,0.3992257);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,0.3512688);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,0.26532);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,0.1853919);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,0.1307916);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,0.09985832);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,0.07889015);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,0.06518818);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,0.05418508);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,0.05439268);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,0.04235155);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,0.04588085);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,0.03840705);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,0.0367462);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,0.02221381);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,0.01494761);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,0.01266394);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,0.009342254);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,0.004982536);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,0.001868451);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,0.002491268);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,0.00145324);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,0.0008304226);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,0.001660845);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,0.003262779);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,0.008061945);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,0.009103928);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,0.008539636);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,0.007421721);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,0.006203902);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,0.005210861);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,0.004553147);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,0.004046979);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,0.003678782);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,0.003353972);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,0.003360391);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,0.002965202);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,0.00308628);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,0.002823742);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,0.002762014);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,0.00214749);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,0.001761592);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,0.001621452);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,0.001392661);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,0.001017056);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.0007191671);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.0005492729);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.0005871975);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_tags_17->Modified();
   H_dR_Bj0_tags_17->cd();
   H_dR_Bj0_tags_17->SetSelected(H_dR_Bj0_tags_17);
}
